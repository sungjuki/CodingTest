#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int num[10] = {};

    int res = 0;

    while (input)
    {
        num[input % 10]++;
        input = input / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        res = max(res, num[i]);
    }

    res = max(res, (num[6] + num[9] + 1) / 2);

    cout << res;
}