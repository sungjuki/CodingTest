#include <bits/stdc++.h>

using namespace std;

int arr[201];

int main()
{
    int NUM;
    int find;
    int tmp;

    cin >> NUM;
    for (int i = 0; i < NUM; i++)
    {
        cin >> tmp;
        arr[tmp + 100]++;
    }
    cin >> find;

    int ans = arr[find + 100];
    cout << ans;
}