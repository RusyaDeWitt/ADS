#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;
    float arr[1000];

    cin >> n;

    for(i = 0; i < n; ++i)
    {
       cin >> arr[i];
    }

    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];

    }
    cout << arr[0];

    return 0;
}