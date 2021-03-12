//정수 n이 주어 졌을때, n을 1,2,3의 합으로 나타내는 방법의 수를 구하는 프로그램
//첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n이 주어진다. n은 양수이며 11보다 작다.
//각 테스트 케이스마다, n을 1,2,3의 합으로 나타내는 방법의 수를 출력한다. 3 4 7 10/7 44 274
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
