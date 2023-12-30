//Question 6
#include <iostream>

using namespace std;

int main()
 {
	int x,y,rev=0,n;
    cout<<"Enter the number\n";
    cin>>x;
    n=x;
    while(x>0)
    {
        y=x%10;
        rev=(rev*10)+y;
        x=x/10;
    }
    if (n==rev)
    {
        cout<<n<<" is a Paildrome.";
    }
    else
    {
        cout<<n<<" is not a Palindrome.";
    }
    
return 0;
}