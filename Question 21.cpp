//Question 21
#include <iostream>
using namespace std;

class rectangle
{
    private:
        int a,b,l; 
    public:
        void getdata();
        void area();
};

void rectangle::getdata()
{
    cout<<"Enter lenght and Breadth\n";
    cin>>l>>b;
}
void rectangle::area()
{
    a=l*b;
    cout<<"Area of retangle="<<a;
}

int main()
{
    rectangle r1;
    r1.getdata();
    r1.area();
    return 0;
}

