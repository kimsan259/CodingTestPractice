//수열 A가 주어졌을 때, 그 수열의 증가 부분 수열중에서 합이 가장 큰 것을 구하는 프로그램을 작성하시오.
//입력 : 첫째 줄에 수열 A의 크기 N(1<=N<=1,000)이 주어진다. [10]
//입력 : 둘째 줄에는 수열 A를 이루고 있는 Aj가 주어진다.(1<=Aj<=1,000) [1 100 2 50 60 3 5 6 7 8] 
//출력 : 첫째 줄에 수열 A의 합이 가장 큰 증가 부분 수열의 합을 출력한다. [113]
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#include<cstdio>
#define MAX 1001
using namespace std;

int N;
int Arr[MAX];
int DP[MAX];

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}
	int Max = 0;
	for (int i = 1; i <= N; i++)
	{
		DP[i] = Arr[i];
		for (int j = 1; j <= i; j++)
		{
			if (Arr[j] < Arr[i] && DP[i] < DP[j] + Arr[j])
			{
				DP[i] = DP[j] + Arr[i];
			}
		}
		if (Max < DP[i]) Max = DP[i];
	}
	cout << Max << endl;

	return 0;

	}
