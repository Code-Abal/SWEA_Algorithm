#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
/*
L과 R의 값을 합하고 절대값 + ?갯수
그리고 L or R이 있으면 true값.
true값일 때는 
*/
const int OFFSET = 100;
int Robot(const string& str, int idx, int pos, vector<vector<int>>& dp)
{
	int abspos = abs(pos);
	if (idx == str.size())
	{
		return abspos;
	}

	if (dp[idx][pos + OFFSET] != -1)
	{
		return dp[idx][pos + OFFSET];
	}

	if (str[idx] == 'L')
	{
		dp[idx][pos + OFFSET] = Robot(str, idx + 1, pos - 1, dp);
	}
	else if (str[idx] == 'R')
	{
		dp[idx][pos + OFFSET] = Robot(str, idx + 1, pos + 1, dp);
	}
	else
	{
		dp[idx][pos + OFFSET] = max(Robot(str, idx + 1, pos - 1, dp), Robot(str, idx + 1, pos + 1, dp));
	}

	dp[idx][pos + OFFSET] = max(dp[idx][pos + OFFSET], abspos);

	return dp[idx][pos + OFFSET];
}

int main()
{
	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		string str;
		cin >> str;

		vector<vector<int>> dp(51, vector<int>(151, -1));

		cout << Robot(str, 0, 0, dp) << "\n";
	}

	return 0;
}  