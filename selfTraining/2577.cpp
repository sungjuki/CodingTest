#include <bits/stdc++.h>

using namespace std;

int number[10];

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    int res = A * B * C;

    while (res)
    {
        number[res % 10]++;
        res = res / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << number[i] << "\n";
    }
}