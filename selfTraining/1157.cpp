#include <iostream>
#include <string>

using namespace std;

int alpha[91];

void print(int i, int max, int double_check)
{
    cout << "i = " << i << endl;
    cout << "max = " << max << endl;
    cout << "double_check = " << double_check << endl;
}
int main()
{
    string input;

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = input[i] - 32;
        }
        alpha[input[i]]++;
    }

    /*
        for (int i = 65; i < 91; i++)
        {
            cout << alpha[i];
            cout << " ";
        }
        cout << endl;
    */

    int max = 0;
    int alpha_num = 0;
    int double_check = 0;
    for (int i = 65; i < 91; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            alpha_num = i;
            double_check = 0;
        }
        else if (max != 0 && alpha[i] == max)
        {
            double_check = 1;
        }
    }
    if (double_check)
    {
        cout << "?";
    }
    else
    {
        cout << static_cast<char>(alpha_num);
    }
}