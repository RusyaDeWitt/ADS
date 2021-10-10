#include <iostream>

using namespace std;

int main()
{
    int n , b;
    cin >> n >> b;                
    int intArray[200000];
    for (int i = 0; i < n; i++)
    {
        cin >> intArray[i];  
    }

    for(int i = 0; i < b; i++)
    {   
        int x;            
        cin>>x;
    
        int m, l = 0, r = n - 1; 


        while (l != r)
        {
            m = (l + r) / 2;
            if (intArray[m] < x)
                l = m + 1;
            else
                r = m;
        }
        if (intArray[l] == x)    
            cout << l + 1 << " ";
        else                     
            cout << 0 << " ";

    
        l = 0;                   
        r = n - 1;
        while (l < r - 1)
        {
            m = (l + r) / 2;
            if (intArray[m] <= x)
                l = m;
            else
                r = m - 1;
        }
        if (intArray[r] == x)    
            cout << r + 1 << endl;
        else if (intArray[l] == x)
            cout << l + 1 << endl;
    }
    return 0;
}