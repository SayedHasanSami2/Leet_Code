#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    int target;
    cin >> target;
    int flag = false;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << "," << j << "]";
                flag = true;
                break;
            }
        }
        if(flag)
        break;
    }

    return 0;
}