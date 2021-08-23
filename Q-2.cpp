#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string word; cin >> word;

    int anton = 0, danic = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'A')
            anton++;
        else 
            danic++;
    }

    if (anton > danic)
        cout << "Anton" << endl;
    else if (anton < danic)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;           
}