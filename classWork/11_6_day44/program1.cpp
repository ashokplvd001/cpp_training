#include <iostream>
#include <thread>
#include <Windows.h>

using namespace std; 
void hello() {    std::cout << "Hello from thread!\n";    }

int main() {
    std::thread t(hello);
     t.join();
    Sleep(1000);
    cout << "End of the program\n";
    if( t.joinable())
    t.join();
    return 0;
}