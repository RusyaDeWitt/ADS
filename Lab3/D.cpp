#include <iostream>

using namespace std;


int main()
{
    int a, b[1000], sum = 0;
    int i = 0;

    for(i; i < 6; i++)
    {
        cin>>a;
        b[i] = a; 
    }

    for(int j = 0; j < i; j++)
    {
        if(b[j] <= b[j+1])
        {
            for(int k = j; k < i; k+2)
            {
                if(b[k] > b[j])
                {
                    break;
                }
            }
            sum++;
        }
    }
    cout<<sum;
}