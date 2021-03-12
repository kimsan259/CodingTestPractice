//RGB거리에는 집이 N개 있다. 1번 집부터 N번 집이 순서대로 있다.
//집은 빨강, 초록, 파랑 중 하나의 색으로 칠해야하고, 각각의 집을 빨강, 초록, 파랑으로 칠하는 비용이 주어졌을 때 
//모든 집을 칠하는 비용의 최솟값
//1번 집의 색은 2번 집의 색과 같지 않아야 한다.
//N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.
//i(2<=i<=N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.
//첫째 줄에 집의 수(2 <= N <= 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 각 집을 빨강, 초록, 파랑으로 칠하는 비용이 1번 집부터 한 줄에 하나씩 주어진다.
//집을 칠하는 비용은 1,000보다 작거나 같은 자연수이다
//첫째 줄에 모든 집을 칠하는 비용의 최솟값을 출력한다.
//3
//26 40 83
//49 60 57
//13 89 99
//출력:96
#include <iostream>
#define endl "\n"
#define MAX 1010
using namespace std;
int N;
int Cost[MAX][3];
int DP[MAX][3];

int Min(int A, int B) { if (A < B) return A; return B; }

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Cost[i][0] >> Cost[i][1] >> Cost[i][2];
	for (int i = 1; i <= N; i++)
	{
		DP[i][0] = Min(DP[i - 1][1] + Cost[i][0], DP[i - 1][2] + Cost[i][0]);
		DP[i][1] = Min(DP[i - 1][0] + Cost[i][1], DP[i - 1][2] + Cost[i][1]);
		DP[i][2] = Min(DP[i - 1][0] + Cost[i][2], DP[i - 1][1] + Cost[i][2]);
	}
	cout << Min(Min(DP[N][0], DP[N][1]), DP[N][2]) << endl;

	
		return 0;

	}
