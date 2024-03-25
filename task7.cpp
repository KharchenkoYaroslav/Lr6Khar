#include <iostream>
using namespace std;
float f1(float t)
{
    return t / 2.0;
}
double f1(double t)
{
    return t / 3.0;
}

void f2(unsigned char c) { cout << c;
}
void f2(char c) {
cout << c;
}

int f3(int a, int b) { return a+b; }
int f3(int a, int &b) { return a-b; }

int f4(int a) { return a*a; }
int f4(int a, int b=0) { return a*b; }

int main()
{
    float x = 10.09;
    cout << f1(x); // unambiguous use f(float)
    double y = 10.09;
    cout << f1(y);  // unambiguous use f(double)
    cout << f1(10); // ambiguous, convert 10 to double or float?

    f2('c');
    f2(86); // which f() is called?

    int x3 = 1;
    int y3 = 2; 
    cout << f3(x3, y3); // which version of f() is called?

    cout << f4(10, 2); // calls f(int, int)
    cout << f4(10); // ambiguous call - f(int) or f(int, int)?

    return 0;
}