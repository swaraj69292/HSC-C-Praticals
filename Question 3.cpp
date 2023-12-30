#include <iostream>

using namespace std;

int main()
 {
	 long int i, n, fact=1;
	 cout<<"Enter the number\n";
	 cin>>n;
	 i=1;
	 while(i<=n)
	 {
		 fact=fact*i;
		 i++;
	 }
	 cout<<"Factorial="<<fact;
	 
return 0;
}