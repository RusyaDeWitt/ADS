#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n,m;
    deque<int> dq,dq1;

    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>s;

        if(s == "+")
        {   
            cin>>m;
            dq1.push_back(m);
        }
        if(s == "-")
        {
            cout<<dq.front()<<endl;
            dq.pop_front();
        }
        if(s == "*")
        {
            cin>>m;
            dq1.push_front(m);
        };

        if(dq1.size()>dq.size())
        {
            dq.push_back(dq1.front());
            dq1.pop_front();
        }
    }
}