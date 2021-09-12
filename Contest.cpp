#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;
    
    int n;
    string row;
    while (cases--)
    {
        cin >> n >> row;
        for (int i = 0; i < row.length(); i++)
        {
            if (row[i] == 'U') row[i] = 'D';
            else if (row[i] == 'D') row[i] = 'U';
        }
        cout << row << endl;
    }
}