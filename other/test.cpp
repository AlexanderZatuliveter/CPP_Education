#include <iostream>
#include <windows.h> // Только для Windows

class Test {
    int field;   // Поле (в C++ принято называть их с маленькой буквы)

    public:          // Все, что ниже этой метки, будет публичным
        
        // Конструктор (необязательно, но полезно для инициализации)
        Test(int value) : field(value) {} 

        int GetValue()
        {
            return field;
        }
};

int main() {
    SetConsoleCP(65001);       // Установить кодировку ввода UTF-8
    SetConsoleOutputCP(65001); // Установить кодировку вывода UTF-8

    Test tst = Test(10);
    std::cout << "Число в классе: " << tst.GetValue() << '\n';

    int number; // Создаем переменную для хранения целого числа

    std::cout << "Введите целое число: ";
    std::cin >> number; // Ждем ввода от пользователя

    std::cout << "Квадрат числа: " << number * number << std::endl;

    system("pause"); // Вызывает системную команду Windows

    return 0;
}