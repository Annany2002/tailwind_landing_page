#include <bits/stdc++.h>
using namespace std;

bool greater(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0, maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (greater(a[i + 1], a[i]) == true)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << maxCount + 1;
}