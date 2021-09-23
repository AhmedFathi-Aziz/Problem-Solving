#include <iostream>
#include <algorithm>
#include <assert.h>
#include <string>
#include <vector>
#include <math.h>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
	int n, time, group, built;
	cin >> n >> time >> group >> built;

	int times = (n + group - 1) / group;
    int in = times;
    
	int oven1 = 0, oven2 = built;
	while (times--) {

		if (oven1 < oven2)
			oven1 += time;

		else
			oven2 += time;	
	}

	if (max(oven1, oven2) < in * time) cout << "YES" << endl;
	else cout << "NO" << endl;
}
