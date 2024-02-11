#include <bits/stdc++.h>

using namespace std;

void removeAtEven(queue<int>&q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            int x = q.front();
            q.push(x);
        }
        q.pop();
    }
    return;
}

void reverse(queue<int> &q)
{

    int n = q.size();
    stack<int> st;

    while (!q.empty())
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    return;
}

void display(queue<int> q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return;
}

void display_recursive(int n, queue<int> &q)
{
    if (q.empty())
        return;
    cout << q.front() << " ";
    int x = q.front();
    q.pop();
    display_recursive(q.size(), q);
    q.push(x);
}

int main()
{
    queue<int> q;
    /*
    push
    pop
    front
    size
    back
    */

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl; //--1
    cout << q.back() << endl;  //--5
    cout << q.size() << endl;  //--5
    q.pop();
    cout << q.front() << endl; //--2
    cout << q.size() << endl;  //--4
    cout << endl
         << endl;

    int n = q.size();

    // display_recursive(n, q);
    // cout << endl;
    display(q);
    cout << endl;
    reverse(q);
    display(q);
    return 0;
}