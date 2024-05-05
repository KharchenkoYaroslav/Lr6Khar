#include <iostream>
#include <cstdio> 
#include <ctime> 
using namespace std;

class Date
{
    int day, month, year;

public:
    Date(int m, int d, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    Date(char const *str)
    {
        sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
    }

    Date(time_t time)
    {
        tm *tm_time = localtime(&time); 
        year = tm_time->tm_year - 100; 
        month = tm_time->tm_mon + 1; 
        day = tm_time->tm_mday; 
    }

    void show()
    {
        cout << month << '/' << day << '/' << year << '\n';
    }
};

int main()
{
    Date strdate("19/03/19");
    strdate.show();

    Date intdate(19, 03, 19);
    intdate.show();

    time_t now = time(0);
    Date timedate(now);
    timedate.show();

    return 0;
}