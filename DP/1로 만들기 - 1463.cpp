//1.X가 3으로 나뉘면, 3으로 나눈다.
//2. X가 2로 나누어 떨어지면, 2로 나눈다.
//3. 1을 뺀다.
// 첫째줄에 연산을 하는 횟수의 최솟값
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