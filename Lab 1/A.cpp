#include <bits/stdc++.h>

using namespace std;

struct stck {
    int a[100000], n = 0;
    
    int size()
    {
        return n;
    };

    void push(int x)
    {
        a[n++] = x;
    }

    void pop()
    {
        n--;
    }

    int top()
    {
        return a[n-1];
    }

};

int main(){
    stck stack;
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
            cout<<stack.size()<<endl;
        }

        if(s == "push")
        {
            int x;
            cin>>x;
            stack.push(x);
            cout<<"ok"<<endl;
        }

        if(s == "top")
        {
            cout<<stack.top()<<endl;
        }

        if(s == "pop")
        {   
            if(stack.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<stack.top()<<endl;
                stack.pop();
            }
        }

        if(s == "clear")
        {
            while(stack.size() != 0)
            {
                stack.pop();
            }
            cout<<"ok"<<endl;
        }

        if(s == "back")
        {
            if(stack.size() == 0)
            {
                cout<<"error"<<endl;
            }else{
                cout<<stack.top()<<endl;
            }
        }
    }
}