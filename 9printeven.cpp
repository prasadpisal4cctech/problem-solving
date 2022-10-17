// Write a program to accept a number N and print the first N even numbers.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Even Numbers are:" << endl;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << endl;
    }

    return 0;
}