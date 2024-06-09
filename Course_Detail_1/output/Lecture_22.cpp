#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *q;
    int *p;
    p=&a;
    q=&b;
    
    a=1;//only changing the value but not the address 
    b=5;
    int c=*p+*q;
    *p=3;
    // cout<<"The value of a is (from the actual variable type):"<<a<<endl;
    // cout<<"The value of a from the pointer using *(astreix inderection operator):"<<*p<<endl;
    cout<<"The value of c is :"<<c;
    cout<<"The address of a is:"<<&a<<endl<<"The address of the pointer is:"<<p;
    return 0;
}