// BAI12_BangCuuChuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 9; i++) {
        cout << "bang cuu chuong " << i << ":" << endl;
        for (int j = 2; j <= 9; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}