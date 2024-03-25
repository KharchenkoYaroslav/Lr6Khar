#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

long mystrtol(const char *start, char **end, int base = 10) {
    return strtol(start, end, base);
}

int main() {
    SetConsoleOutputCP(65001);
    const char *str = "12345abcd";
    char *end; 
    long num = mystrtol(str, &end); 
    cout << "Число: " << num << endl;
    cout << "Залишок: " << end << endl;
    return 0;
}