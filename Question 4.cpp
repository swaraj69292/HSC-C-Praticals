#include <iostream>

using namespace std;

int main()
 {
	int x,y,sum=0;
    cout<<"enter the number\n";
    cin>>x;
    while(x>0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    cout<<"is="<<sum;
return 0;
}