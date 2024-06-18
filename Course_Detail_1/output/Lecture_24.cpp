#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;

    cout<<"The swapping is completed"<<endl;
}
int main(){
    int a,b;
    a=3;
    b=4;
    swap(&a,&b);//passing the address of a and b to the function 
    cout<<"The value of a and b  after swaping are:"<<a<<" "<<b;
    return 0;

}



