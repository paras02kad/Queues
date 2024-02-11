#include <bits/stdc++.h>

using namespace std;
/*
!not the perfect implementation as of now but will try to make it better in future hopefully :)
*/
class Queue
{
public:
   vector<int> arr;
    int f;
    int b;

    Queue(int val)
    {
        f = -1;
        b = -1;
        vector<int> v(val);
        arr=v;
    }

    void push(int val)
    {
        if (b == -1 && f == -1)
        {
            b = 0;
            f = b;
            arr[b] = val;
        }
        else
        {
            b++;
            if (b == arr.size())
            {
                cout << "Overflow" << endl;
                return;
            }
            else
                arr[b] = val;
        }
        return;
    }

    void display()
    {
        for (int i = f; i <= b; i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }

    void pop()
    {
        if (f == -1)
        {
            cout << "UnderFlow" << endl;
            return;
        }

        else if (f > b)
        {
            cout << "UnderFlow" << endl;
            return;
        }
        else
        {
            f++;
        }
        return;
    }

    void front()
    {
        if (b == -1 && f == -1)
        {
            cout << "Empty Queue" << endl;
        }
        else
        {
            cout << arr[f] << endl;
        }
        return;
    }

    void back()
    {
        if (b == -1 && f == -1)
        {
            cout << "Empty Queue" << endl;
        }
        else
        {
            cout << arr[b] << endl;
        }
        return;
    }

    void size()
    {
        if (f == b && b == -1)
        {
            cout << "Empty Queue" << endl;
        }
        else if (b >= arr.size())
            cout << "Full Queue" << endl;
        else
            cout << (b - f + 1) << endl;
        return;
    }
};

int main()
{

    Queue q(10);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(5);

    q.size();

    q.display();
    // cout << endl;
    // q.pop();

    // q.size();
    // cout << endl;
    // q.display();
    return 0;
}