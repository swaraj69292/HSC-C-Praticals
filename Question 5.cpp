//Question 5
#include <iostream>

using namespace std;

int main()
 {
	int x,y,rev=0;
    cout<<"Enter the number\n";
    cin>>x;
    while(x>0)
    {
        y=x%10;
        rev=(rev*10)+y;
        x=x/10;
    }
    cout<<"Reverse of number is="<<rev;
return 0;
}