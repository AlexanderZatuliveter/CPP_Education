#include <iostream>
#include <string>

using namespace std;

/*
3. Огромное количество коллизий
Хеш-алгоритм хорош тогда, когда даже изменение одного бита в строке полностью меняет результат (эффект лавины).

В твоем случае:

Слабая перемешиваемость: Ты просто складываешь произведения. Операция сложения коммутативна, а умножение здесь работает слишком линейно.

Пример коллизии: Из-за того, что ты используешь i и i+1 внутри формулы, очень легко подобрать разные символы на разных позициях, которые в сумме дадут то же самое число.
*/

int main() {
    setlocale(LC_ALL, "RU");

    while (true) {
        string input;
        unsigned hash = 0;
        unsigned hash_salt = 173982381;
        cout << "enter string: ";

        // Читаем строку до нажатия Enter, включая пробелы
        if (!getline(cin, input)) 
            break;

        if (input.empty()) continue; // Если ввели пустую строку, идем в начало

        for (int i = 0; i < input.length(); i++)
            hash += (hash * 31) + 
                    static_cast<int>((int)input[i] + 1) * (i+1) * hash_salt + i;
        
        hash += input.length();

        cout << "hash: " << hash << endl;
    }

    return 0;
}