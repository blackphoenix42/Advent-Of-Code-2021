
#include <bits/stdc++.h>
using namespace std;

int main()
{
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
    string gamma = "";
    for (int i = 0; i < s[0].length(); i++)
    {
        int zero = 0, one = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j][i] == '0')
                zero++;
            else
                one++;
        }
        if (zero > one)
            gamma += '0';
        else
            gamma += '1';
    }
    string epislon = "";
    for (int i = 0; i < gamma.length(); i++)
    {
        if (gamma[i] == '0')
            epislon += '1';
        else
            epislon += '0';
    }

    cout << stoi(gamma, 0, 2) * stoi(epislon, 0, 2);

    return 0;
}