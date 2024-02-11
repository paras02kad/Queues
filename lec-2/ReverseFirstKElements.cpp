#include <bits/stdc++.h>

using namespace std;

void display(queue<int> q)
{
    cout<<endl;
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    return;
}

void reverseFirstK(queue<int> &q, int k)
{
    stack<int> st;
    int n = q.size();

    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < n - k; i++)
    {
        q.push(q.front());
        q.pop();
    }

    return;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    display(q);
    reverseFirstK(q, 2);
    display(q);
    return 0;
}
