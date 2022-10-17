// Write a program to accept a number N and calculate N!

#include <iostream>
using namespace std;

int main()
{
    int n;
    long fact = 1;
    cout<<"You can find factorial only 1 to 15 numbers "<<endl;

    cout << "Enter a Number: ";
    cin >> n;

    if (n < 0)
        cout << "Number should be positive only";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " = " << fact;
    }

    return 0;
}