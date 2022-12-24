#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (ceil(double(b) / m > a))
        cout << n * a;
    else
        cout << fixed << setprecision(0) << (n % m * a > b ? (ceil(double(n) / m) * b) : (n / m * b + (n % m) * a));
    return 0;
}