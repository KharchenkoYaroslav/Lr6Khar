#include <iostream>
#include <windows.h>

using namespace std;


void clreol() {
    cout << "\r"<< "\033[K"; 
}
void clreol(int count) {
    cout << "\033[" << count << "D" << "\033[K"; 
}

int main() {
    SetConsoleOutputCP(65001);
    cout << "Текст для тесту функції.";
    clreol();
    cout << "Текст 2 для тесту функції.";
    clreol(5);
    

    return 0;
}