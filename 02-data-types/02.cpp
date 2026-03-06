#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    std::cout << "Введите переменную a: ";
    std::cin >> a;

    std::cout << "Введите переменную b: ";
    std::cin >> b;

    std::cout << "a: " << a << ". b: " << b;

    // Типы данных

    // Целые числа
    short num1 = 7; // 2 byte / -32K до 32K
    int num2 = 5; // 4 byte / -2B до 2B
    long num3 = 10; // 8 byte

    unsigned short num4 = 7; // 2 byte / 0 до 65K
    unsigned int num5 = 5; // 4 byte / 0 до 4B
    unsigned long num6 = 10; // 8 byte

    // Числа с точкой
    float num7 = 67.785375f;
    double num8 = 45.3258045462345f;

    // Хранение символа
    char sym1 = 'a';

    // Boolean переменная
    bool is_trueman = true;

    return 0;
}