#include <iostream>
using namespace std;

class Student
{
public:
    int attendance;
    float total_mark;

    void calculate_percentage()
    {
        cout << "The percentage of the marks is: " << total_mark << "%";
    }
};

class Bank_Client
{
private:
    int credit_number;
    int cvv;
    string user_name;
    string password;

public:
    string name;

    // Getter for credit_number
    int getCreditNumber()
    {
        return credit_number;
    }

    // Setter for credit_number
    void setCreditNumber(int num)
    {
        credit_number = num;
    }

    // Getter for cvv
    int getCVV()
    {
        return cvv;
    }

    // Setter for cvv
    void setCVV(int cvv)
    {
        this->cvv = cvv;
    }

    // Getter for user_name
    string getUserName()
    {
        return user_name;
    }

    // Setter for user_name
    void setUserName(string name)
    {
        user_name = name;
    }

    // Getter for password
    string getPassword()
    {
        return password;
    }

    // Setter for password
    void setPassword(string pass)
    {
        password = pass;
    }
};

int main()
{
    Bank_Client a;

    a.name = "rohit";
    a.setPassword("Enjoyc++");
    a.setCVV(4535);
    a.setCreditNumber(674275);

    cout << "The password of rohit is: " << a.getPassword() << endl;

    // Uncomment the following lines to use the Student class
    // Student s;
    // s.attendance = 54;
    // s.total_mark = 52;
    // s.calculate_percentage();

    return 0;
}
