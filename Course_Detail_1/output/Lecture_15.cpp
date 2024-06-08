#include<iostream>
using namespace std;

int sum(int a, int b, int c) {
    int result = a + b + c;
    return result;
}

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int totalSum = sum(num1, num2, num3);
    cout << "Sum of three integers: " << totalSum << endl;
    return 0;
}
