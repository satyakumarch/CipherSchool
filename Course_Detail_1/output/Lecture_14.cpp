#include<iostream>
using namespace std;

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int a = 10, b = 20;
    int result = sum(a, b); // Store the result in a variable
    cout << "Sum: " << result << endl;
    return 0;
}
