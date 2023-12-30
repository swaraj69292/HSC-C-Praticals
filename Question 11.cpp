//Question 11
#include <iostream>
using namespace std;

int main() {
    int a[10], i, sum=0;
    cout<<"Enter 10 numbers\n";
    for(i=0; i<=9; i++)
    {
        cin>>a[i];
    }
    cout<<"Array in reverse order is \n";
    for(i=9; i>=0; i--) 
    {
       cout<<a[i]<<endl;
    }
    
  return 0;
}