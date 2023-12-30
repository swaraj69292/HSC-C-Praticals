//Question 20
#include <iostream>
using namespace std;

class rectangle
{
    private:
        int a,b,l; //Member Variable
    public:
        void getdata()
        {
            cout<<"Enter the lenght and breadth\n";
            cin>>l>>b;
        }
        void area()
        {
            a=l*b;
            cout<<"Area of rectangle="<<a;
        }
};

int main()
{
    rectangle r1;
    r1.getdata();
    r1.area();
    return 0;
}

