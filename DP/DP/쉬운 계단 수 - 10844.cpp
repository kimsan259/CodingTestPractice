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
	//���̰� 1�� �̷���� ��ܼ��� ��� 1�̴�.
	for (int j = 0; j < 10; j++)
		DP[1][j] = 1;
	//���̰� 2�λ��� ��ܼ��� DP�̿�
	for (i = 2; i <= n; i++) {
		for (j = 0; j < 10; j++) {
			//���� 20,30ó�� j�� 0�϶� -1�� ���� +1�� �����ϱ⿡
			if (j == 0)
				DP[i][j] = DP[i - 1][1] % MOD;
			if (j == 9)
				DP[i][j] = DP[i - 1][8] % MOD;
			else
				DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % MOD;

		}
	}
	for (j = 1; j < 10; j++) //���̰� n�� ��ܼ��� �Ѱ����� ���Ѵ�.
		sum = (sum + DP[n][j]) % MOD;
	printf("%d", sum);
	return 0;

}