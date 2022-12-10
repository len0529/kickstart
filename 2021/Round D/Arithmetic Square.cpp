#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
#define ll long long
// [0][1][2]
// [3][j][4]
// [5][6][7]
int check(ll l, ll m, ll r) {
	if ((l + r) == m * 2) {
		return 1;
	}
	else return 0;
}
ll solve() {
	ll n[4] = { -1 };
	ll num[8];
	ll count1 = 0;
	ll count2 = 0;
	ll max_count2 = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> num[i];
	}
	count1 += check(num[0], num[1], num[2]);
	count1 += check(num[5], num[6], num[7]);
	count1 += check(num[0], num[3], num[5]);
	count1 += check(num[2], num[4], num[7]);
	map <ll, int > mp;
	if ((num[1] + num[6]) % 2 == 0)mp[(num[1] + num[6]) / 2] ++;
	if ((num[3] + num[4]) % 2 == 0)mp[(num[3] + num[4]) / 2] ++;
	if ((num[0] + num[7]) % 2 == 0)mp[(num[0] + num[7]) / 2] ++;
	if ((num[2] + num[5]) % 2 == 0)mp[(num[2] + num[5]) / 2] ++;
	for (auto& x : mp) {
		if (x.second > max_count2) {
			max_count2 = x.second;
		}
	}
	return count1 + max_count2;
}

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cout << "case #" << i + 1 << ": " << solve();
		cout << endl;
	}
}