#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    for (int i = 1; i < 15; i++) {
        if (i == 10) break;
        if (i % 2 == 0) continue;
        cout << "El: " << i << endl;
    }

    return 0;
}