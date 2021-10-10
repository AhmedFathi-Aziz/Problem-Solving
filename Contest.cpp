#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <assert.h>
#include <string>
#include <vector>
#include <math.h>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    int cases; cin >> cases;
    while (cases--) {
        int n; cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << "\n";
        else cout << (n / 2) + 1 << "\n";    }
}