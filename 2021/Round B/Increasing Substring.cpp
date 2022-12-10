#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n,count = 1;
		string s;
		cin >> n >> s;
		cout << "Case #" << i + 1 << ": " << "1 ";
		for (int j = 1; j < n; j++)
		{
			if (s[j] > s[j - 1]) {
				count++;
			}
			else count = 1;
			cout << count << " ";
		}
		cout << endl;
	}
}
