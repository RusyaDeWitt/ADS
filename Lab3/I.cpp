#include <iostream>

using namespace std;

int a,b,c, arr[20000];



void binary_search(int x)
{
    int l = 1, r = a;
    int s = 0, e = 0;
    while(l <= r)
    {
        int mid = (l+r) / 2;

        if(x == arr[mid])
        {
            if(e == 0) e = mid+1;
        }
        if(x > arr[mid]) l = mid + 1;
        else r = mid - 1;
    }
    
    l = 1, r = a;

    while(l <= r)
    {
        int mid = (l+r) / 2;

        if(x == arr[mid])
        {
            if(e != mid) s = mid+1;
        }
        if(x > arr[mid]) l = mid + 1;
        else r = mid - 1;
    }

    cout<<s<<" "<<e<<endl;
}



int main()
{
    cin>>a>>b;

    for(int i = 0; i < a; i++)
    {
        cin>>c;
        arr[i] = c; 
    };

    for(int i = 0; i < b; i++)
    {
        cin>>c;
        binary_search(c);
   }
}