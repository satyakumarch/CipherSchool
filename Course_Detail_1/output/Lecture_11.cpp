#include<iostream>
using namespace std;
int main(){
    //while loop
    // int i=1;//initialization
    // while(i<10){ //condition
    //     cout<<i<<" ";
    //     i++;//updation
    // }

    int i;
    int input;
    //guess the number 65
    //user has 100 chance
    i=100;
    for(int i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"congrat you hava guessed correct";
            break;
        }
    }
}