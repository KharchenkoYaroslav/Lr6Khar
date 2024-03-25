#include <iostream>

using namespace std;

void order(int& a, int& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int x = 1, y = 0;
    order(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}