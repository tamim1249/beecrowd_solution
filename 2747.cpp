#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 39; i++)
    {
        cout << "-";
    }
    cout << endl;

    for(int j = 0; j < 5; j++)
    {
        cout << "|";
        for(int k = 0; k < 37; k++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }

    for(int l = 0; l < 39; l++)
    {
        cout << "-";
    }
    cout << endl;

    return 0;
}
