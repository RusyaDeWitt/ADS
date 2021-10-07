#include <iostream>

using namespace std;

int main()
{
    int a,b,max = 0,prev_max;
    
    cin>>a;

    for(int i = 0; i < a; i++)
    {
        cin>>b;

        if(b > max)
        {
            prev_max = max;
            max = b;
        }

        if(b > prev_max && b < max)
        {
            prev_max = b;
        }
    }
    cout<<prev_max;
}