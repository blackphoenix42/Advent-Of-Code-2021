#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int inc = 0;
    for (int i = 1; i < 2000; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            inc++;
        }
    }
    cout << inc;

    return 0;
}