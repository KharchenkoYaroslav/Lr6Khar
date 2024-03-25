#include <iostream>
#include <windows.h>

using namespace std;

int dif(int a, int b) { return a - b; }
float dif(float a, float b) { return a - b; }

int main()
{
    SetConsoleOutputCP(65001);
    int intResult = dif(10, 5);
    cout << "Різниця для цілих чисел: " << intResult << endl;

    float floatResult = dif(10.f, 5.f);
    cout << "Різниця для дійсних чисел: " << floatResult << endl;

    return 0;
}