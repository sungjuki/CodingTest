#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int num = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (i != 0 && input[i - 1] != 32 && input[i] == 32)
        {
            num++;
        }
    }
    if (input[input.length() - 1] != 32)
    {
        num++;
    }

    cout << num;
}