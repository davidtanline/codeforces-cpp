#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    unordered_map<string, int> dict;
    while (n--)
    {
        cin >> s;
        if (dict.count(s) == 0)
        {
            dict[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << dict[s] << endl;
            dict[s]++;
        }
    }
    return 0;
}