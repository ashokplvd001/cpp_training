#include <iostream>
#include <mutex>
#include <thread>
using namespace std; 


mutex mtx; 
mutex mtx1;
std::condition_variable cv;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
 //   cout << "ok1\n";
    std::cout << "Thread processing...\n";
}

void notifier() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
      
     //   cv.notify_one();
      //  cout << "ok2\n";
        this_thread::sleep_for(chrono::seconds(2));
        ready = true;

    }
    cv.notify_one();
}

int main()
{
    thread t1(worker);
    thread t2(notifier);

    t1.join();


    t2.join();
}