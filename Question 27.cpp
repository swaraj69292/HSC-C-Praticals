//Question 27
#include <iostream>
#include <math.h>
using namespace std;

class circle
{
    private:
        float a,c,r;
    public:
        circle()
        {
            cout<<"Enter the radius\n";
            cin>>r;
        }
        void arcir()
        {
            a=3.142*r*r;
            c=2*3.142*r;
        }
        void display()
        {
            cout<<"area="<<a<<endl;
            cout<<"circumference="<<c<<endl;
        }
        ~circle()
        {
            cout<<"object is destroyed";
        }
};

int main()
{
    circle c1;
    c1.arcir();
    c1.display();
}


