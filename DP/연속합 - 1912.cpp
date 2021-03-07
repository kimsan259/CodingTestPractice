#include <iostream>

#define endl "\n"
#define MAX 100010
using namespace std;

int N;
int Arr[MAX];
int DP[MAX];

int Max(int A, int B) { if (A > B) return A; return B; }

void Input()
{
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> Arr[i];
}

void Solution()
{
	DP[1] = Arr[1];
	int Answer = DP[1];
	for (int i = 2; i <= N; i++)
	{
		DP[i] = Max(Arr[i], DP[i - 1] + Arr[i]);
		Answer = Max(Answer, DP[i]);
	}

	cout << Answer << endl;
}

void Solve()
{
	Input();
	Solution();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("Input.txt", "r", stdin);
	Solve();

	return 0;
}



