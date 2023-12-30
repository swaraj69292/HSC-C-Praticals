//Question 14
#include <iostream>
using namespace std;

int main() {
    int a[10], i, j, temp;
    cout<<"Enter 10 numbers\n";
    for(i=0; i<=9; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=8; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Sorted array is\n";
    for(i=0; i<=9; i++)
    {
        cout<<a[i]<<endl;
    }
  return 0;
}