//Question 10
#include <iostream>
using namespace std;

int main() {
   int a,b,c,n,i;
   cout<<"Enter the lenght of series\n";
   cin>>n;
   a=0;
   b=1;
   cout<<a<<" ";
   cout<<b<<" ";
   for(i=1; i<=n-2; i++)
   {
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
   }
   return 0;
}