#include <iostream>
#include <windows.h>
#include <random>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");

    const int size = 10;

    int arr[size]; 

    int max, min; 

    srand(time(0));

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 100;
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++) {

        if (arr[i] > max) {

            max = arr[i];

        }
        if (arr[i] < min) {

            min = arr[i];
        }
    }
    cout << "Максимальний елемент: " << max << endl;

    cout << "Мінімальний елемент: " << min << endl;



    return 0;

}