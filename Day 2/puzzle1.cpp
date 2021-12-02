#include <bits/stdc++.h>
using namespace std;

int main()
{
    int horizontal = 0, depth = 0;

    int n;
    cin >> n;
    cin.get();
    
    vector<string> s;
    while (n--)
    {
        string temp;
        getline(cin, temp);
        s.push_back(temp);
    }

    for (int i = 0; i < s.size(); i++)
    {
        int last = s.at(i).length() - 1;
        int num = s.at(i)[last] - '0';

        if (s[i][0] == 'f')
            horizontal += num;
        else if (s[i][0] == 'u')
            depth -= num;
        else if (s[i][0] == 'd')
            depth += num;
    }
    cout << horizontal * depth;

    return 0;
}