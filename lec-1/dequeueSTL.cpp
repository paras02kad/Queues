#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(23);
    cout<<dq.front()<<endl;
return 0;
}