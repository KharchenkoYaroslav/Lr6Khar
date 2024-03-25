#include <iostream>
#include <string>

using namespace std;

void reverse(string &str, int count = 100) {
    string temp = str;
    str = "";

    count = min(count, (int)temp.length());
    for (int i = count - 1; i >= 0; i--) { 
        str += temp[i]; 
    }
    for (int i = count; i < temp.length(); i++){
        str += temp[i]; 
    }
}

int main() {
    string str = "This is a test string.";
    reverse(str, 4); 

    cout << str << endl; 

    return 0;
}