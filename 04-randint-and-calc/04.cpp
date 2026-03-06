#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    // от 0 до 1
    // rand();

    // от 1 до 20
    int result = 1 + rand() % 20;
    cout << result << endl;

    float num1, num2, res;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    // + - * /
    char math;
    cout << "Enter math symbol (+, -, *, /): ";
    cin >> math;

    // if (math == '+')
    //     res = num1 + num2;
    // else if (math == '-')
    //     res = num1 - num2;
    // else if (math == '*')
    //     res = num1 * num2;
    // else if (math == '/')
    //     res = num1 / num2;

    switch (math) {
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '*': res = num1 * num2; break;
    case '/': res = num1 / num2; break;
    default: res = 0; cout << "Error"; break;
    }

    cout << "Result: " << res << endl;

    // ---------------------------------------------

    // Остаток при делении
    int a = 10, b = 3, z;
    z = a % b;
    cout << z;

    // Сокращенные операции
    a -= 5;
    a++; // a + 1
    a--; // a - 1

    return 0;
}