#include <iostream>

using namespace std;


int main(){

    int a[1000],b,c,d;

    cin>>b;

    for(int i = 0; i < b; i++)
    {
        cin>>c;
        a[i] = c;
    }

    cin>>d;

    for(int i = 0; i < b; i++)
    {
        if(a[i] == d)
            cout<<i+1<<" ";
    }

    return 0;
}