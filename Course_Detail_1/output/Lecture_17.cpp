#include<iostream>
using namespace std;
void PrintfHi(){
    cout<<"Hi"<<endl;
    return;
}
int sum(int a,int b){
    int c;
    c=a+b;
}
int main(){
    PrintfHi();
    int a,b;
    a=4;
    b=6;
    int d;
    d=sum(a,b);
    cout<<"The sum of a and b is:"<<d;
    return 0;
}