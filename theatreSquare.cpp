#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long val = ceil(double(n) / a) * ceil(double(m) / a);
    cout << val;
    return 0;
}