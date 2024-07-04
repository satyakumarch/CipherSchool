#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>a;
    a.push(5);
a.push(6);
a.push(7);
a.push(8);
a.push(9);
a.push(10);
a.pop();
cout<<a.top()<<endl;
if(a.empty()==0)
{
    cout<<"The stack is currently not empty";

}else{
    cout<<"The stack is empty";
}

    
    
}