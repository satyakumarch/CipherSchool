#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int *arr;
    arr=new int[5];

    delete arr;

    //a vector is an array which sixe isn not fixed ans will allocate sapce verytime you add a new element

    vector<int>a;
    cout<<"The size of the vector is:"<<a.size()<<endl;
    
    int i;
    for(int i=0;i<5;i++){
        a.push_back(i+1);
    }
        cout<<"The size of the vector is:"<<a.size()<<endl;
cout<<"The element of the vector is:";
        for(auto j=a.begin();j<a.end();j++)
        {
            cout<<*j;
        }
cout<<endl<<"The capacity of the vector is:"<<a.capacity()<<endl;


}