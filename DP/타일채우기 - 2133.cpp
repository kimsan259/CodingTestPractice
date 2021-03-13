//3*N 크기의 벽을 2*1, 1*2 크기의 타일로 채우는 경우의 수를 구해보자.
//입력 : 첫째 줄에 N(1<=N<=30)이 주어진다. [2]
//출력 : 첫째 줄에 경우의 수를 출력한다. [3]

#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#include<cstdio>
int dp[31];
using namespace std;

int main(void)
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 1)
		printf("0\n");
	else
	{
		dp[2] = 3;
		dp[4] = 11;
		for (int i = 6; i <= n; i += 2)
		{
			dp[i] = 2 + dp[i - 2] * 3;
			for (int j = 2; j < i - 2; j += 2)
				dp[i] += dp[j] * 2;
		}
		printf("%d\n", dp[n]);
	}

	return 0;
}