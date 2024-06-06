#include<iostream>
using namespace std;
int main(){
    int a[4];
    int i;
    cout<<"Give 5 integer as input"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"THE 5 given input are :";
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
