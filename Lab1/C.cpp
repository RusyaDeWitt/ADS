#include <bits/stdc++.h>

using namespace std;


struct Deque 
{
    int a[2000000];
    int start = 0 , end = 0;

    int size()
    {
        return end - start;
    }

    void push_front(int x)
    {
        a[start] = x;
        start--;
    }

    void push_back(int x)
    {
        a[end+1] = x;
        end++;
    };

    void pop_front()
    {
        start++;
    };

    void pop_back()
    {
        end--;
    };

    int front()
    {
        return a[start+1];
    };

    int back()
    {
         return a[end];
    };
};




int main()
{
    Deque deque;
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
            cout<<deque.size()<<endl;
        }

        if(s == "push_front")
        {
            int x;
            cin>>x;
            deque.push_front(x);
            cout<<"ok"<<endl;
        }

        if(s == "push_back")
        {
            int x;
            cin>>x;
            deque.push_back(x);
            cout<<"ok"<<endl;
        }

        if(s == "front")
        {
            if(deque.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<deque.front()<<endl;
            }
        }


        if(s == "pop_front")
        {
            if(deque.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<deque.front()<<endl;
                deque.pop_front();
            }
        }


        if(s == "back")
        {   
            if(deque.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<deque.back()<<endl;
            }
        }

        if(s == "pop_back")
        {
            if(deque.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<deque.back()<<endl;
                deque.pop_back();
            }
        }

        if(s == "clear")
        {
            while(deque.size() != 0)
            {
                deque.pop_back();
            }
            cout<<"ok"<<endl;
        }

    }
}