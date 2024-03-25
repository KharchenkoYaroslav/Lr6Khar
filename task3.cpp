#include <iostream>
using namespace std;
class myclass
{
public:
    myclass();
    myclass(const myclass &obj);
    myclass f();
    myclass g(myclass obj);
};
// Normal constructor
myclass::myclass()
{
    cout << "Constructing normally\n";
}
// Copy constructor
myclass::myclass(const myclass &obj)
{
    cout << "Constructing copy\n";
}
// Return an object.
myclass myclass::f()
{
    myclass temp;//нема ініціалізації іншим об'єктом, звичайний конструктор
    return temp;
}
myclass myclass::g(myclass obj)// об'єкт є параметром ф-ції - конструктор копій
{
    myclass temp = obj;//одразу ініціалізуємо об'єкт об'єктом - конструктор копій
    return temp;
}
int main()
{
    myclass obj;//Створюємо новий об'єкт - звичайний конструктор
    obj = obj.f();//звичайне присвоєння - конструктор копій не викликається
    obj = obj.g(obj);//звичайне присвоєння - конструктор копій не викликається
    return 0;
}