#include <iostream>
using namespace std;

// Function declaration
int square(int num);

int main() {
    int number, result;

    // Asking for user input
    cout << "Enter a number to find its square: ";
    cin >> number;

    // Function call
    result = square(number);

    // Displaying the result
    cout << "The square of " << number << " is " << result << "." << endl;

    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}
