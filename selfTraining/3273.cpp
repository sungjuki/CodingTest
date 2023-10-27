#include <bits/stdc++.h>

using namespace std;

int arr[1000001];
int occur[2000001];

int main()
{
    int num, S, sum;
    int res = 0;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> S;
        arr[i] = S;
        occur[arr[i]]++;
    }
    cin >> sum;

    for (int i = 0; i < num; i++)
    {
        if ((sum - arr[i] > 0) && (sum - arr[i] != arr[i]) && (occur[sum - arr[i]]))
        {
            occur[sum - arr[i]]--;
            occur[arr[i]]--;
            res++;
        }
    }

    cout << res;
}