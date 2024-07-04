#include<iostream>
using namespace std;

class Coordinate
{
public:
    float a;
    float b;
public:

 void sqdistancefromcoordinate(float a)
    {
float dist;
dist=(this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);
cout<<dist<<" ";
    }

    void sqdistancefromcoordinate(float a,float b)
    {
float dist;
dist=(this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);
cout<<dist<<" ";
    }

};
int main()
{
    Coordinate x;
    x.a=0;
    x.b=0;
    x.sqdistancefromcoordinate(3,4);
    return 0;
}