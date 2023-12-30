//Question 19
#include <iostream>
using namespace std;

class addition
{
    private:
        int a,b,sum;
    public:
        void getdata()
        {
            cout<<"Enter two numbers\n";
            cin>>a>>b;
        }
        void add()
        {
            sum=a+b;
        }
        void print()
        {
            cout<<"Addition= "<<sum;
        }
};

int main()
{
    addition a1;
    a1.getdata();
    a1.add();
    a1.print();
    return 0;
}

