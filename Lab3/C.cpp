#include <iostream>

using namespace std;

int main()
{
    int a,b,max= -1e9, indx =  -1e9;

    cin>>a;

    for(int i = 0; i < a; i++)
    {
        cin>>b;
        if(b > max)
        {
            max = b;
            indx = i + 1;
        }
    }

    cout<<indx;

}