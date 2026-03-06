#include <iostream>
#include <string>

using namespace std;

struct Point {
    int x, y;
};

struct Tree {
    string name;
    int age;
    bool is_alive;
    float height;
    Point coords;

    void get_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Tree oak;
    oak.name = "Дуб";
    oak.age = 24;
    oak.coords.x = 100;
    oak.coords.y = 10;

    Tree spruce;
    spruce.name = "Елка";
    spruce.age = 5;
    spruce.coords.x = 50;
    spruce.coords.y = 5;

    // cout << oak.name << " - " << spruce.name;
    oak.get_info();
    spruce.get_info();

    return 0;
}