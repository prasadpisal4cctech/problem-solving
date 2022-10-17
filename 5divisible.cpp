// Write a program to accept 2 numbers A,B and check if A is divisible by B.
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "Enter value of A";
    cin >> A;
    cout << "Enter value of B";
    cin >> B;
    if(B==0)
    {
        cout<<"Number should be positive only";
    }


    if (A % B == 0)
    {
        cout << "A is divisible by B";
    }
    else
    {
        cout << "A is not divisible by B";
    }

    return 0;
}
