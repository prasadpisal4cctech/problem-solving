//Write a program to accept a number and check if it is even.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "0 is neither Odd nor even";
    }
    else if (n % 2 != 0)
    {
        cout << "Given number is not even";
    }
    else
    {
        cout << "Given number is  even ";
    }
}