#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> sizes;
    int n, cur, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> cur;
        sizes[cur]++;
    }
    count += sizes[4] + sizes[3] + ceil(double(sizes[2]) / 2);
    if (sizes[1] > sizes[3])
    {
        if (sizes[2] % 2 == 1 && ceil(double(sizes[1] - sizes[3] - 2) / 4) >= 0)
        {
            count += ceil(double(sizes[1] - sizes[3] - 2) / 4);
        }
        else
        {
            count += ceil(double(sizes[1] - sizes[3]) / 4);
        }
    }
    cout << count;
    return 0;
}