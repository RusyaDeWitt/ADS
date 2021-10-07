#include <bits/stdc++.h>

using namespace std;


int a;

int main()
{
    cin>>a;
    int s = 1;
    for(int i = 1; i < a; i++)
    {
        s *= 2;
        if(s >= a)
        {
            cout<<i;
            return 0;
        }
    }
}