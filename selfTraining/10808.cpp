#include <bits/stdc++.h>

using namespace std;

int alpha[26];

int main()
{
    string input;
    cin >> input;

    for (auto s : input)
    {
        alpha[s - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << ' ';
    }
}