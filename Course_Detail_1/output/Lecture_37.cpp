#include<iostream>
using namespace std;

int main() {
    string name;
    int mids;
    float end;
    bool pre_abs;

    string name_1;
    int mid_1;
    float end_1;
    bool pre_abs_1;

    // Input for the first student
    cout << "Enter the name of the first student: ";
    cin >> name;
    cout << "Enter the midterm score of the first student: ";
    cin >> mids;
    cout << "Enter the final score of the first student: ";
    cin >> end;
    cout << "Was the first student absent for the final exam? (0 for no, 1 for yes): ";
    cin >> pre_abs;

    // Input for the second student
    cout << "Enter the name of the second student: ";
    cin >> name_1;
    cout << "Enter the midterm score of the second student: ";
    cin >> mid_1;
    cout << "Enter the final score of the second student: ";
    cin >> end_1;
    cout << "Was the second student absent for the final exam? (0 for no, 1 for yes): ";
    cin >> pre_abs_1;

    // Output the information
    cout << "First student: " << name << ", Midterm: " << mids << ", Final: " << end << ", Absent: " << (pre_abs ? "Yes" : "No") << endl;
    cout << "Second student: " << name_1 << ", Midterm: " << mid_1 << ", Final: " << end_1 << ", Absent: " << (pre_abs_1 ? "Yes" : "No") << endl;

    return 0;
}
