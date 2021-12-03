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
    vector<string> s2 = s;
    string oxygen = "";
    string co2 = "";

    for (int i = 0; i < s[0].length(); i++)
    {
        int zero = 0, one = 0;
        for (int j = 0; j < s.size(); j++)
            if (s[j][i] == '0')
                zero++;
            else
                one++;

        if (one >= zero)
        {
            oxygen += '1';
            for (int j = 0; j < s.size(); j++)
                if (s[j][i] == '0')
                {
                    s.erase(s.begin() + j);
                    j = 0;
                }
        }
        else
        {
            oxygen += '0';
            for (int j = 0; j < s.size(); j++)
                if (s[j][i] == '1')
                {
                    s.erase(s.begin() + j);
                    j = 0;
                }
        }

        if (s.size() == 1)
        {
            oxygen = s[0];
            break;
        }
    }

    for (int i = 0; i < s2[0].length(); i++)
    {
        int zero = 0, one = 0;
        for (int j = 0; j < s2.size(); j++)
            if (s2[j][i] == '0')
                zero++;
            else
                one++;
        if (zero <= one)
        {
            co2 += '0';
            for (int j = 0; j < s2.size(); j++)
                if (s2[j][i] == '1')
                {
                    s2.erase(s2.begin() + j);
                    j = 0;
                }
        }
        else
        {
            co2 += '1';
            for (int j = 0; j < s2.size(); j++)
                if (s2[j][i] == '0')
                {
                    s2.erase(s2.begin() + j);
                    j = 0;
                }
        }
        if (s2.size() == 1)
        {
            co2 = s2[0];
            break;
        }
    }
    
    cout << stoi(oxygen, 0, 2) * stoi(co2, 0, 2);
    return 0;
}