#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    wchar_t w = L'?';
    wcout << L"Wide char output: " << w << endl;
    return 0;
}