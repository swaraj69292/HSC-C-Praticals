//Question 23
#include <iostream>
using namespace std;

class circle
{
    private:
        float ar, cir,r;
    public:
        void getdata();
        void arcir();
        void print();
};

void circle::getdata()
{
     cout<<"Enter the radius\n";
     cin>>r;
}
void circle::arcir()
{
    ar=3.142*r*r;
    cir=2*3.142*r;
}
void circle::print()
{
     cout<<"Area="<<ar<<"\n"<<"Circumference="<<cir;
}
int main()
{
    circle r1;
    r1.getdata();
    r1.arcir();
    r1.print();
    return 0;
}

