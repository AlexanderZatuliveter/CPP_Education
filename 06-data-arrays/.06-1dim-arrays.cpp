#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Одномерные массивы
    int nums[3];
    nums[0] = 56;
    nums[1] = 67;
    nums[2] = 78;

    nums[1] = 4;
    nums[1]++;
    // cout << nums[1] << endl;

    float nums2[3] = {4, 6, 7};

    for (int i = 0; i < 3; i++)
        cout << "El " << i << ": " << nums2[i] << endl;

    return 0;
}