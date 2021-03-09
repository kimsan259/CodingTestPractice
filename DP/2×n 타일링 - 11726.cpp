// 2*n 크기의 직사각형을 1*2, 2*1 타일로 채우는 방법의 수를 구하는 프로그램
// 첫째줄에 n을 입력, 2*n 크기의 직사각형을 채우는 방법의 수를 10007로 나눈 나머지를 출력.
// 2/2
#include <iostream>
using namespace std;

int main()
{
	int DP[1010] = {};
	int n;
	DP[0] = 1;  DP[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) 
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	printf("%d", DP[n] );
	return 0;
}