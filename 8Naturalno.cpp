
// Write a program to accept a number N and print the first N natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Numbers are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    return 0;
}