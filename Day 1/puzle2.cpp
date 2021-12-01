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
    for (int i = 0; i < n - 3; i++)
    {
        int prevSum = arr[i] + arr[i + 1] + arr[i + 2];
        int nextSum = arr[i + 1] + arr[i + 2] + arr[i + 3];
        if (nextSum > prevSum)
        {
            inc++;
        }
    }
    cout << inc;

    return 0;
}
