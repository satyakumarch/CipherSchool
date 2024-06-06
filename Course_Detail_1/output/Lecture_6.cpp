#include<iostream>
using namespace std;

int main(){
    //if else statement
    cout<<"Enter the marks of the students:";
    int marks;
    cin>>marks;
    if(marks > 90 && marks <100){
        cout<<" you can receive A+ Grade"<<endl;
    } 
    else if(marks >80 && marks <90){
        cout<<"you can receive A Grade:"<<endl;
    }
    else if(marks >70 && marks <=80){
        cout<<"you can receive B + Grade"<<endl;
    }
    else{
        cout<<"You can fail in exam."<<endl;
    }
    //switch case statement
    cout<<"Switch case statement";
    int a;
    cout<<"Enter the number of week:";
    cin>>a;
    switch(a){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"Tuesday";
        break;
        case 4:
        cout<<"Wednesday";
        break;
        case 5:
        cout<<"Thursday";
        break;
        case 6:
        cout<<"Friday";
        break;
        case 7:
        cout<<"Saturday";
        break;
        default:
        cout<<"Invalid input please input the less than 7";
    }
    
    return 0;
}
