//1.X�� 3���� ������, 3���� ������.
//2. X�� 2�� ������ ��������, 2�� ������.
//3. 1�� ����.
// ù°�ٿ� ������ �ϴ� Ƚ���� �ּڰ�
// 2/1, 10/3

#include <iostream>
int DP[1000001];
using namespace std;
int min(int a, int b) {
	return a > b ? b : a;
}
int main()
{
	int N;
	scanf("%d", &N);
	DP[1] = 0;
	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0)
			DP[i] = min(DP[i], DP[i / 2] + 1);
		if (i % 3 == 0)
			DP[i] = min(DP[i], DP[i / 3] + 1);
	}
	printf("%d\n", DP[N]);
	return 0;
}