//���� n�� �־� ������, n�� 1,2,3�� ������ ��Ÿ���� ����� ���� ���ϴ� ���α׷�
//ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���� n�� �־�����. n�� ����̸� 11���� �۴�.
//�� �׽�Ʈ ���̽�����, n�� 1,2,3�� ������ ��Ÿ���� ����� ���� ����Ѵ�. 3 4 7 10/7 44 274
#include <iostream>
using namespace std;
const int MAX = 12;
int main()
{
	int dp[MAX];
	int N = 0;
	cin >> N;
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for (int i = 4; i < MAX; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
		
		return 0;

	}
