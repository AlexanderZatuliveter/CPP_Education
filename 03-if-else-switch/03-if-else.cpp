#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int num;

    std::cout << "Введите число: ";
    std::cin >> num;

    bool is_has_car = true;

    if (num > 3 && !is_has_car) {
        std::cout << "Число больше 3";
        if (num == 5)
            std::cout << ", Число равно 5";
    }

    else if (num == 2)
        std::cout << "Число равно 2";

    else if (num == 1)
        std::cout << "Число равно 1";

    else if (num == -12)
        std::cout << "Число равно -12";

    else
        std::cout << "Число меньше 3";

    return 0;
}