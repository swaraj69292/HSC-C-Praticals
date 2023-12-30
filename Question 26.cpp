//Question 26
#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
    private:
        float l,b,a;
    public:
        rectangle()
        {
            cout<<"Enter the  lenght and breadth\n";
            cin>>l>>b;
        }
        void area()
        {
            a=l*b;
        }
        void display()
        {
            cout<<"area="<<a;
        }
};

int main()
{
    rectangle r1;
    r1.area();
    r1.display();
}
