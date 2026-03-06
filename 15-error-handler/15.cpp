#include <iostream>
#include <string>

using namespace std;

void divide(float a, float b) {
    if (b == 0) throw 0;
    else cout << (a / b) << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    try {
        divide(5.2f, 0);
    }
    catch(int err) {
        if (err == 0) 
            cout << "Ошибка при делении на 0";
    };

    return 0;
}