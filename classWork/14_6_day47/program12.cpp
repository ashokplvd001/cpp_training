#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;

// Article class represents the content
class Article {
    string content;

public:
    Article(const string& text) : content(text) {
        cout << "[Article Created]: " << content << endl;
    }

    void read() const {
        cout << "Reading Article: " << content << endl;
    }

    ~Article() {
        cout << "[Article Deleted]: " << content << endl;
    }
};

// Subscriber keeps a weak_ptr, so it does not prolong Article's life
class Subscriber {
    weak_ptr<Article> weak_article;

public:
    Subscriber(weak_ptr<Article> w) : weak_article(w) {
        cout << "[Subscriber Created]" << endl;
    }

    void readArticle() const {
        // Try to lock the weak_ptr to get a shared_ptr
        shared_ptr<Article> article = weak_article.lock();

        if (article)
            article->read();
        else
            cout << "Article no longer available!" << endl;
    }

    ~Subscriber() {
        cout << "[Subscriber Deleted]" << endl;
    }
};

int main() {
    // Outer scope for article
    shared_ptr<Article> article = make_shared<Article>("Tech Alert: Smart Pointers Explained!");

    // Subscribers reference the article but don't own it
    Subscriber s1(article);
    Subscriber s2(article);
    Subscriber s3(article);

    cout << "Initial reads by subscribers:\n";
    s1.readArticle();
    s2.readArticle();
    s3.readArticle();

    cout << "Use count (shared_ptr): " << article.use_count() << endl;

    // Destroy the article explicitly
    article.reset();  // Article deleted here

    cout << "\nAfter article is deleted:\n";
    s1.readArticle();
    s2.readArticle();
    s3.readArticle();

    return 0;
}