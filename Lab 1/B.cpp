#include <bits/stdc++.h>

using namespace std;

struct Queue 
{
    int a[100000];
    int start , end;

    Queue()
    {
        start = 0;
        end = 0;
    };

    int size()
    {
        return max(0, end-start);
    };

    int front()
    {
        return a[start];
    };

    int back()
    {
        return a[end-1];
    };

    void push(int x)
    {
        a[end++] = x;
    };

    void pop()
    {
        start++;  
    };
};


int main()
{
    Queue queue;
    string s;

    while (s != "exit")
    {
        cin>>s;

        if(s == "exit")
        {
            cout<<"bye"<<endl;
        }

        if(s == "size")
        {
            cout<<queue.size()<<endl;
        }

        if(s == "push")
        {
            int x;
            cin>>x;
            queue.push(x);
            cout<<"ok"<<endl;
        }

        if(s == "front")
        {
            if(queue.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<queue.front()<<endl;
            }
        }

        if(s == "pop")
        {   
            if(queue.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<queue.front()<<endl;
                queue.pop();
            }
        }

        if(s == "clear")
        {
            while(queue.size() != 0)
            {
                queue.pop();
            }
            cout<<"ok"<<endl;
        }
    }
}