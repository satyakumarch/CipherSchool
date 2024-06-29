#include<iostream>
using namespace std;
int main()
{
    char name[5];
    cout<<"Enter your string:";
    for(int i=0;i<5;i++){
        cin>>name[i];
    }
    cout<<"The name you have just entered is:";
    for(int i=0;i<5;i++){
        cout<<name[i];

    }
}
