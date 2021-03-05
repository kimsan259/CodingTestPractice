#include <iostream>
#define endl "\n"
#define MAX 105
#define MOD 100000000
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
long long memo[100];
int main()
{
	int N;
	cin >> N;
	memo[0] = 0;
	memo[1] = 1;
	memo[2] = 1;

	for (int i = 3; i <= N; i++)
		memo[i] = memo[i - 1] + memo[i - 2];
	cout << memo[N] << endl;
	return 0;
}