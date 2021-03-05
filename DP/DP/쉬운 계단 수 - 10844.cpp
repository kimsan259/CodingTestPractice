#include <iostream>
#define endl "\n"
#define MAX 105
#define MOD 100000000
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	int DP[101][10];
	int n, j, i;
	int sum = 0;
	scanf("%d", &n);
	//길이가 1로 이루어진 계단수는 모두 1이다.
	for (int j = 0; j < 10; j++)
		DP[1][j] = 1;
	//길이가 2인상인 계단수는 DP이용
	for (i = 2; i <= n; i++) {
		for (j = 0; j < 10; j++) {
			//만약 20,30처럼 j가 0일때 -1은 없고 +1만 가능하기에
			if (j == 0)
				DP[i][j] = DP[i - 1][1] % MOD;
			if (j == 9)
				DP[i][j] = DP[i - 1][8] % MOD;
			else
				DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % MOD;

		}
	}
	for (j = 1; j < 10; j++) //길이가 n인 계단수의 총개수를 구한다.
		sum = (sum + DP[n][j]) % MOD;
	printf("%d", sum);
	return 0;

}