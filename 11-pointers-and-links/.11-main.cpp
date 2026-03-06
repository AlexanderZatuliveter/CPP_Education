#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Ссылки
    int num = 10;
    int &a = num;

    a = 15;
    cout << &num << " - " << num << endl;
    cout << &a << " - " << a << endl;

    // Указатели
    int val = 12;
    int* ptrval = &val;

    *ptrval = 20;
    ptrval = nullptr;
    cout << &val << " - " << val << endl;
    cout << ptrval << " - " << *ptrval << endl;

    return 0;
}