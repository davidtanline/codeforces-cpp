#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxValue, maxDiff = 0;
    cin >> n >> maxValue;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        maxDiff = max(maxDiff, arr[i + 1] - arr[i]);
    }
    cout << fixed << (maxDiff / 2.0 >= (max(arr[0] - 0, maxValue - arr[n - 1])) ? maxDiff / 2.0 : (max(arr[0] - 0, maxValue - arr[n - 1])));
}