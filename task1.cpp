#include <cstring>
#include <iostream>

using namespace std;

class strtype {
char *p; 
int len; 
    public:
char *getstring() { return p; } 
int getlength() { return len; }
strtype(){
    p = new char[255];
    memset(p, 0, 255);
    len = 255;
};
strtype(const char* p, int len){
    this->p = new char[len];
    strncpy(this->p, p, len);
    this->len = len;
};
};

int main()
{
    strtype s1;
    cout << "s1: " << s1.getstring() << "; length: " << s1.getlength() << endl;

    strtype s2("Hello, World!", 5);
    cout << "s2: " << s2.getstring() << "; length: " << s2.getlength() << endl;

    return 0;
}