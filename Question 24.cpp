//Question 24
#include <iostream>
using namespace std;

class convert
{
    private:
        float c,F;
    public:
        void getdata()
        {
            cout<<"Enter the degree centigrade\n";
            cin>>c;
        }
        void calculate()
        {
            F=((9*c)/5)+32;
        }
        void print()
        {
            cout<<"Value of F="<<F;
        }
};

int main()
{
    convert c1;
    c1.calculate();
    c1.print();
}
