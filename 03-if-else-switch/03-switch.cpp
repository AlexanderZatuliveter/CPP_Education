#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int num;
    std::cin >> num;

    switch (num) {
        case 5: 
            std::cout << "Num is 5"; 
            break;
        case 50: 
            std::cout << "Num is 50"; 
            break;
        case 3: 
            std::cout << "Num is 3"; 
            break;
        case 15: 
            std::cout << "Num is 15"; 
            break;
        default:
            std::cout << "Num is not in diapason";
            break;
    }

    return 0;
}