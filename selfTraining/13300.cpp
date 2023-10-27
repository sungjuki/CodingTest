#include <bits/stdc++.h>

using namespace std;

int arr[7][2];

int main()
{
    int num, roomLimit;
    int roomNum = 0;

    cin >> num >> roomLimit;

    while (num--)
    {
        int sex, year;
        cin >> sex >> year;

        arr[year][sex]++;
    }

    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            roomNum = roomNum + arr[i][j] / roomLimit;
            if (arr[i][j] % roomLimit)
            {
                roomNum++;
            }
        }
    }
    cout << roomNum;
}