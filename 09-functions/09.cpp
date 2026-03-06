#include <iostream>
#include <string>

using namespace std;

void print(string word);
int add(int a, int b);

int main() {
    setlocale(LC_ALL, "RU");

    /* print("Hi!");
    print("Hello!");
    print("Other word that mean the same..."); */

    int res1 = add(5, 7);
    int res2 = add(51, 7);

    if (res1 > res2)
        cout << res1;
    else
        cout << res2;

    return 0;
}

void print(string word) {
    cout << word << endl;
}

int add(int a, int b) {
    return a + b;
}