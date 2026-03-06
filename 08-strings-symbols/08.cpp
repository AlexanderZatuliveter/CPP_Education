#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
    char word[] = "Hi!";
    for (int i = 0; i < sizeof(word); i++)
        cout << word[i];

    // getline(cin, word);

    string words = "Hello World! привет";
    words[0] = 'W';
    cout << '\n' <<words << endl;

    cin >> words;
    cout << "New: " << words;

    return 0;
}