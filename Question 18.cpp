//Question 18
#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch[80];
    int i;
    cout<<"Enter a sentence\n";
    cin.getline(ch,80);
    for(i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]==' ')
        {
            ch[i]='-';
        }
    }
    for(i=0; ch[i]!='\0'; i++)
    {
        cout<<c[i];
    }
  return 0;
}