#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Многомерные массивы
    int matrix[3][2] = {
        {3, 5}, 
        {5, 8}, 
        {-2, 0}
    };
    // cout << matrix[1][1] << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << endl;
        }
    }

    return 0;
}