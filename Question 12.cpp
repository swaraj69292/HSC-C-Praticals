//Question 12
#include <iostream>
using namespace std;

int main() {
    int a[10], i, sum=0;
    cout<<"Enter 10 numbers\n";
    for(i=0; i<=9; i++)
    {
        cin>>a[i];
    }
    for(i=9; i>=0; i--) //OR (i=0; i<=9; i++)
    {
        sum=sum + a[i];
    }
    cout<<"Sumation="<<sum;
  return 0;
}