//Question 15
#include <iostream>
using namespace std;

int main() {
    int a[10], i, j, temp, mid, high=9, low=0, x, pos=-1;
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
    cout<<"Enter the number to be search\n";
    cin>>x;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            pos=mid;
            break;
        }
        else if(a[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (pos==-1)
    {
        cout<<x<<" is not found.";
    }
    else
    {
        cout<<x<<" found is at "<<pos+1;
    }
  return 0;
}