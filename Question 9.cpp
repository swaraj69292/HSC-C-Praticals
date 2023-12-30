//Question 9
#include <iostream>
using namespace std;

int main() {
   int i,n,fact=1;
   cout<<"Enter the number:\n";
   cin>>n;
   for(i=1; i<=n; i++ )
   {
       fact=fact*i;
   }
   cout<<"Factorial is "<<fact;
    return 0;
}