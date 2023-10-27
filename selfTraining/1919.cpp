#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input1, input2;

    cin >> input1 >> input2;

    char arr[26] = {};
    int res = 0;

    for (auto s : input1)
    {
        arr[s - 'a']++;
    }
    for (auto s : input2)
    {
        arr[s - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] *= -1;
        }
        res = res + arr[i];
    }

    res *= -1;

    cout << res;
}