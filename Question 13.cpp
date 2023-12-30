//Question 13
#include <iostream>
using namespace std;

int main() {
    int a[10], i, max;
    cout<<"Enter 10 numbers\n";
    for(i=0; i<=9; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0; i<=9; i++)
    {
        if(max <a[i])
        {
            max=a[i];
        }
    }
    cout<<"Largest= "<<max;
  return 0;
}