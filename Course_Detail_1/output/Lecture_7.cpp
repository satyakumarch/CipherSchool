#include <iostream>
using namespace std;

int main() {
    int size = 5; // Change the size as needed
    int numbers[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
