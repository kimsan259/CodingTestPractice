// 2*n ũ���� ���簢���� 1*2, 2*1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷�
// ù°�ٿ� n�� �Է�, 2*n ũ���� ���簢���� ä��� ����� ���� 10007�� ���� �������� ���.
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