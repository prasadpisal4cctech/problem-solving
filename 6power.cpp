//Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the power B) .
#include<iostream>
using namespace std;
int main()
{int a,b,ans=1;
    cout<<"Enter a Number";
    cin>>a;
   l1: cout<<"Enter power of number";
    cin>>b;
    if (b<0)
    {
        cout<<"Power should be positive"<<endl;
        goto l1;
    }
    
for (int i = 1; i <= b; i++)
{
    ans=ans*a;
}

cout<<"Ans is "<<ans;

return 0;
}
