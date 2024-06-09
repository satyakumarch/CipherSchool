#include <iostream>
using namespace std;

void increment(int num) {
    num++; // Modify the local copy
}

int main() {
    int x = 5;
    increment(x);
    cout << "Value of x after increment: " << x << endl;
    return 0;
}
