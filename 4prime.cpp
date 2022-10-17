// Write a program to accept a number and check if it is prime.

#include <iostream>
using namespace std;
int main()
{
    int p;
    int count = 0;
    cout << "Enter a number";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        if (p % i == 0)

        {
            count++;

            // cout << "count" << count;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0;
}