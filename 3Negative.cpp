// Write a program to accept a number and check if it is negative.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    if (n < 0)
    {
        cout << "Given number is Negative";
    }
    else if (n == 0)
    {
        cout << "0 is neither positive nor negative";
    }
    else
    {
        cout << "Given number is not negative";
    }
    return 0;
}