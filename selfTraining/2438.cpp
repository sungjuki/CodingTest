#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}