#include <iostream>
#include <string>

using namespace std;

void print(string word) {
    cout << word << endl;
}

void print(int num) {
    cout << num << endl;
}

void add(int a, int b) {
    int res = a + b;
    print(res);
}

void add(int a, int b, int c) {
    int res = a + b + c;
    print(res);
}

int main() {
    setlocale(LC_ALL, "RU");

    print("some");
    add(5, 6);
    add(5, 6, 7);

    return 0;
}