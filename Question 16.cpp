//Question 16
#include <iostream>
using namespace std;

int main() {
    char ch[80], i, count=0;
    cout<<"Enter a sentence\n";
    cin.getline(ch,80);
    for(i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]==' ')
        {
            count++;
        }
    }
 cout<<"no of words = "<<count+1;
  return 0;
}