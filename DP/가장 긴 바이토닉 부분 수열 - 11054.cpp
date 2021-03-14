//���� S�� � �� Sk�� �������� S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN�� �����Ѵٸ�, �� ������ ������� �����̶�� �Ѵ�.
//���� A�� �־����� ��, �� ������ �κ� ���� �� ������� �����̸鼭 ���� �� ������ ���̸� ���ϴ� ���α׷�
//�Է� : ù° �ٿ� ���� A�� ũ�� N�� �־�����, ��° �ٿ��� ���� A�� �̷�� Aj�� �־�����.(1<=N<=1,000, 1<= Aj<=1,000)
//��� : ù° �ٿ� ���� A�� �κ� ���� �߿��� ���� �� ������� ������ ���̸� ����Ѵ�.
//�Է� : 10
//�Է� : 1 5 2 1 4 3 4 5 2 1
//��� : 7

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