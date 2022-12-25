#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time, val, maximum{0}, l{0}, r{0}, curr{0};
    cin >> n >> time;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    while (l < n && r < n)
    {
        if (v[r] + curr <= time)
        {
            curr += v[r];
            r++;
        }
        else
        {
            curr -= v[l];
            l++;
        }
        maximum = max(maximum, r - l);
    }
    cout << maximum;
    return 0;
}