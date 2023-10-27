#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    while (num--)
    {
        char arr[26] = {};
        string input1, input2;
        cin >> input1 >> input2;
        for (auto x : input1)
            arr[x - 'a']++;
        for (auto y : input2)
            arr[y - 'a']--;

        bool res = true;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
                res = false;
        }
        if (res)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}