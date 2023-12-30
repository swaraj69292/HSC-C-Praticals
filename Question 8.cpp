//Question 8
#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   b=2;
   cout<<"Enter the number\n";
   cin>>a;
   while(a>b)
   {
       c=a%b;
       if(c==0)
       break;
       else
       b++;
   }
   if(b==a)
   {
       cout<<a<<" is a prime number.";
   }
   else
   {
       cout<<a<<" is not a prime number";
   }
    return 0;
}