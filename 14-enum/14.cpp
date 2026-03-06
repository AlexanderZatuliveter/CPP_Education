#include <iostream>
#include <string>

using namespace std;

enum Options {
    open,
    close,
    wait,
    del
};

struct File {
    float weight;
    string name;
    Options state;
};

int main() {
    setlocale(LC_ALL, "RU");

    File my_file;
    my_file.weight = 1.5f;
    my_file.name = "test.txt";
    my_file.state = Options::close;

    if (my_file.state == Options::close)
        cout << "File is close" << endl;

    return 0;
}