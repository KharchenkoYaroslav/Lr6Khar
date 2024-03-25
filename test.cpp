#include <iostream>
#include <cstdlib>
using namespace std;
class array
{
    int *p;
    int size;

public:
    array(int sz)
    { // constructor
        p = new int[sz];
        if (!p)
            exit(1);
        size = sz;
        cout << "Using 'normal' constructor.\n";
    }
    ~array() { delete [] p; }
    // copy constructor:
    array(const array &a);
    void put(int i, int j)
    {
        if (i >= 0 && i < size)
            p[i] = j;
    }
    int get(int i) { return p[i]; }
};
array::array(const array &obj)
{
    size = obj.size;
    p = new int[obj.size]; // allocate memory for copy
    if (!p) exit(1); for (int i=0; i<obj.size; i++)
    p[i] = obj.p[i]; // copy contents
    cout << "Using copy constructor.\n";
}
int main()
{
    array num(10); // this calls 'normal' constructor
    // put some values into the array:
    for (int i = 0; i < 10; i++)
        num.put(i, i);
    // display num:
    for (int i = 9; i >= 0; i--)
        cout << num.get(i);
    cout << "\n";
    // create another array and initialize with num:
    array x = num; // this invokes copy constructor
    // display x:
    for (int i = 0; i < 10; i++)
        cout << x.get(i);
    return 0;
}