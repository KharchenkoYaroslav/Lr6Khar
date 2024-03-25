#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

class stopwatch {
    clock_t start;
    clock_t end;
    clock_t creation_time;

public:
    stopwatch();
    stopwatch(clock_t start);
    ~stopwatch();
    void Start();
    void Stop();
    void Show();
};

stopwatch::stopwatch() : creation_time(clock()) {}

stopwatch::stopwatch(clock_t start) {
    creation_time = start;
}

stopwatch::~stopwatch() {
    clock_t elapsed_time = clock() - creation_time;
    cout << "Пройшло часу зі створення об'єкта(або із заданої точки часу): "
         << static_cast<double>(elapsed_time) / CLOCKS_PER_SEC << " секунд\n";
}

void stopwatch::Start() {
    start = clock();
}

void stopwatch::Stop() {
    end = clock();
}

void stopwatch::Show() {
    clock_t elapsed_time = end - start;
    cout << "Пройшло часу зі старту: "
         << static_cast<double>(elapsed_time) / CLOCKS_PER_SEC << " секунд\n";
}

int main() {
    SetConsoleOutputCP(65001);
    stopwatch ob;
    clock_t start = clock();
    
    char c;
    cout << "Введіть щось щоб почати таймер: ";
    cin >> c;
    ob.Start();
    
    cout << "Введіть щось щоб зупинити таймер: ";
    cin >> c;
    ob.Stop();
    ob.Show();

    stopwatch ob2(start);

    return 0;
}