//Question 32
#include <iostream>
#include <math.h>
using namespace std;

class stu
{
    private:
        char name[20];
        int rno;
    public:
        void getstu()
        {
            cout<<"Enter the name and roll no\n";
            cin>>name>>rno;
        }
        void putstu()
        {
            cout<<"name= "<<name<<endl;
            cout<<"roll no ="<<rno<<endl;
        }
};
class marks
{
    protected:
        int m1,m2,m3;
    public:
        void getmark()
        {
            cout<<"enter three sub marks\n";
            cin>>m1>>m2>>m3;
        }
        void putmark()
        {
            cout<<"M1= "<<m1<<endl;
            cout<<"M2= "<<m2<<endl;
            cout<<"M3= "<<m3<<endl;
        }
    
};
class result:public marks, public stu
{
    private:
        float total,avg;
    public:
        void calculate()
        {
            total=m1+m2+m3;
            avg=total/3;
            cout<<"total= "<<total<<endl;
            cout<<"Average= "<<avg<<endl;
        }
};

int main()
{
    result r1;
    r1.getstu();
    r1.getmark();
    r1.putstu();
    r1.putmark();
    r1.calculate();
    return 0;
}


