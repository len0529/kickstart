#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
	for(int i = 0; i < t; i++)
	{
		int K, N;
		cin >> N >> K;
		string s;
		cin >> s;
		int count = 0,ans = 0;
		for (int j = 0; j < N/2; j++)
		{
			if (s[j] != s[N-j-1]) {
				count++;
			}
		} 
		ans = K - count;
		if (ans < 0)ans *= -1;
		cout << "Case #" << i + 1 << ": " << ans << endl;
	}
}
