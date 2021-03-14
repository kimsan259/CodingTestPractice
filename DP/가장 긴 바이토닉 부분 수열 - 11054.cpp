//수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 그 수열을 바이토닉 수열이라고 한다.
//수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램
//입력 : 첫째 줄에 수열 A의 크기 N이 주어지고, 둘째 줄에는 수열 A를 이루는 Aj가 주어진다.(1<=N<=1,000, 1<= Aj<=1,000)
//출력 : 첫째 줄에 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이를 출력한다.
//입력 : 10
//입력 : 1 5 2 1 4 3 4 5 2 1
//출력 : 7

#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#include<cstdio>
int d[1001], d2[1001];
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int N;
	int arr[1001];
	int dp[1001] = { 0, 1 }, dp2[1001] = { 0 };
	int result = 1;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j]);
		}
		dp[i]++;
	}
	dp2[N] = 1;
	for (int i = N - 1; i >= 1; i--) {
		for (int j = N; j > i; j--) {
			if (arr[i] > arr[j])
				dp2[i] = max(dp2[i], dp2[j]);
		}
		dp2[i]++;
	}
	for (int i = 1; i <= N; i++)
		result = max(result, dp[i] + dp2[i] - 1);
	printf("%d", result);

	return 0;
}