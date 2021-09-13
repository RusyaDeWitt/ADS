#include <bits/stdc++.h>

using namespace std;


int main() 
{
    string name;
    int grade;

    queue<string> q1,q2,q3;

    while(cin>>grade)
    {
        cin>>name;

        if(grade == 9)
        {
            q1.push(name);
        }
        if(grade == 10)
        {
            q2.push(name);
        }
        if(grade == 11)
        {
            q3.push(name);
        }
    }

    while(q1.size() != 0 or q2.size() != 0 or q3.size() != 0)
    {
        if(q1.size() != 0)
        {
            cout<<"9 "<<q1.front()<<endl;
            q1.pop();
        }
        else if(q2.size() != 0)
        {
            cout<<"10 "<<q2.front()<<endl;
            q2.pop();
        }
        else if(q3.size() != 0)
        {
            cout<<"11 "<<q3.front()<<endl;
            q3.pop();
        }
    }
}