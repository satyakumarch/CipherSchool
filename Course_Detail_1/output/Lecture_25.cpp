#include <iostream>
using namespace std;

void minandmax(int *a, int *min, int *max) {
    *min = a[0];
    *max = a[0];
    int small = a[0], large = a[0];
    for (int i = 0; i < 6; i++) { // Changed to 6 because arrays in C++ are 0-based
        if (a[i] > large) {
            large = a[i];
        }
        if (a[i] < small) {
            small = a[i];
        }
    }
    *min = small;
    *max = large;
}

int main() {
    int a[6]; // Corrected the array size to match the loop
    int min, max;
    for (int i = 0; i < 6; i++) { // Changed to 6 because arrays in C++ are 0-based
        a[i] = i;
    }
    minandmax(a, &min, &max);
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    return 0;
}
