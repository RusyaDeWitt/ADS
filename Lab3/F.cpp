#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000], a,b, min = 1000;
    string s;

    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
        {
            a = s[i] - 48;
            if(a < min)
            {
                min = a;
            } 
            arr[i] = a;
        }
    }

    for(int i = 0; i < s.length(); i++)
    {
        
    }
}