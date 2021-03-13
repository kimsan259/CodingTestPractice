//���� A�� �־����� ��, �� ������ ���� �κ� �����߿��� ���� ���� ū ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�Է� : ù° �ٿ� ���� A�� ũ�� N(1<=N<=1,000)�� �־�����. [10]
//�Է� : ��° �ٿ��� ���� A�� �̷�� �ִ� Aj�� �־�����.(1<=Aj<=1,000) [1 100 2 50 60 3 5 6 7 8] 
//��� : ù° �ٿ� ���� A�� ���� ���� ū ���� �κ� ������ ���� ����Ѵ�. [113]
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
