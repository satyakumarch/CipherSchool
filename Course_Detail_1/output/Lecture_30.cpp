#include<iostream>
using namespace std;

class Complex
{
    private:
    float real;
    float img;

    public:
    void set_Parameter(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    void sqdistancefromorigin()
    {
        float dist;
        dist=real*real+img+img;
        cout<<"The distance from origin is:"<<dist;
        return;
    }
};


class New_account
{
    public:
    int amount;
    int days;

    void initial()
    {
        amount=0;
        days=0;
    }
};


int main()
{
    New_account a;
    //this funnction needs to be 
    a.initial();
    a.amount++;

    return 0;

    // Complex a,b;
    // a.set_Parameter(3,4);
    // a.sqdistancefromorigin();
    // return 0;
}