#include <iostream>

using namespace std;


class Article
{
	string content; 
public : 
	Article( const string & text ) : content( text ){
		cout << "[Article created = " << content << endl; 
	}

	void read()
	{
		cout << "Reading artcle = " << content << endl; 
	}
	~Article()
	{
		cout << "Article deleted - " << content << endl;
	}

};

class subscriber
{
	shared_ptr<Article> article; 
public : 
	subscriber(shared_ptr<Article> ptr) : article(ptr) { cout << "[subscriber creater]" << endl; }
	void readArticle()
	{
		if (article) article->read();
		else cout << "No article to read\n";
	}
	~subscriber(){ cout<<"[Subscriber Deleted]" << endl;}
};

int main()
{
	shared_ptr<Article> article = make_shared<Article>("Breaking news");

	{
		subscriber s1(article);
		subscriber s2(article);
		subscriber s3(article);

		s1.readArticle();
		s2.readArticle();
		s3.readArticle();

		cout << "Use count : " << article.use_count() << endl;

	}
	

	cout<<"All subsribers gone\n";
	cout<<"Now the Use count is : "<< article.use_count() << endl;


	{
		shared_ptr<Article> article2 = make_shared<Article> (*article);
		cout << "Now the Use count is : " << article.use_count() << endl;
		cout << "Now the Use count is : " << article2.use_count() << endl;
	}
	cout << "Now the Use count is : " << article.use_count() << endl;
} 