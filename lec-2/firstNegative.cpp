#include <bits/stdc++.h>

using namespace std;

/*
!TC O(n*k);
!SC O(n-k+1);
* not the best approach
*/

// int main()
// {
//     int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cin >> k;
//     int ans[n - k + 1];

//     for (int i = 0; i < n - k + 1; i++)
//     {
//         if (arr[i] < 0)
//             ans[i] = arr[i];
//         else if (arr[i + 1] < 0)
//             ans[i] = arr[i + 1];
//         else if (arr[i + 2] < 0)
//             ans[i] = arr[i + 2];
//         else
//             ans[i] = 0;
//     }

//     for (int i = 0; i < n - k + 1; i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

/*
!TC O(n*k);
!SC O(n-k+1);
* not the best approach
*/

int main()
{
    int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    vector<int> ans;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            q.push(i);
    }
    int i = 0;
    while (i<=n-k)
    {
        while(q.size() > 0 && q.front() < i) q.pop();
        if (q.size() == 0 || q.front() >= i + k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
