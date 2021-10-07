#include <bits/stdc++.h>

using namespace std;


int a,b,c,d,arr[1000000];

bool bin_search(int x)
{
        if(x == arr[0])
            return true;
        if(x > arr[a-1] || x < arr[0])
            return false;

        int l = 1 , r = a;

        while(l <= r)
        {   
            int mid = (l+r)/2;
            if(x == arr[mid])
            {
                return true;
            }
            if(x > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    return false;
}


int main()
{

    cin>>a>>b;

    for(int i = 0; i < a; i++)
    {
        cin>>c;
        arr[i] = c;
    }

    for(int i = 0; i < b; i++)
    {   
        cin>>d;
        if(bin_search(d) == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}