//Question 25
#include <iostream>
#include <math.h>
using namespace std;

class point
{
    private:
        float z,x,y;
    public:
        void getdata()
        {
            cout<<"Enter the  point\n";
            cin>>x>>y;
        }
        float dist()
        {
            z=sqrt((x*x)+(y*y));
            return z;
        }
        void display()
        {
            cout<<"Distance="<<dist();
        }
};

int main()
{
    point p1;
    p1.getdata();
    p1.display();
}
