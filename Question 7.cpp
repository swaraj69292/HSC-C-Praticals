//Question 7
#include <iostream>

using namespace std;

int main()
 {
	int x,y,sum=0,n;
    cout<<"Enter the number\n";
    cin>>x;
    n=x;
    while(x>0)
    {
        y=x%10;
        sum=sum+(y*y*y);
        x=x/10;
    }
    if (n==sum)
    {
        cout<<n<<" is a Armstrong.";
    }
    else
    {
        cout<<n<<" is not a Armstrong.";
    }
    
return 0;
}