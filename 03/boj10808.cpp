#include <iostream>

using namespace std;

int alpha[26];

int main()
{
    string input;
    cin >> input;

    for (auto c : input)
    {
        alpha[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << ' ';
    }

    return (0);
}