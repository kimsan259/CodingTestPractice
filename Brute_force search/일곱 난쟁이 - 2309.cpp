//�ϰ� �������� Ű�� ���� 100�� �ȴ�
//��ȩ �������� Ű�� �־����� ��, �ϰ� �����̸� ã�� ���α׷�
//�Է� : ��ȩ ���� �ٿ� ���� �����̵��� Ű�� �־�����. �־����� Ű�� 100�� ���� �ʴ� �ڿ���, ��ȩ �������� Ű�� ��� �ٸ���, ������ ������ ���������� ��쿡�� �ƹ��ų� ���
//��� : �ϰ� �������� Ű�� ������������ ���. �ϰ� �����̸� ã�� �� ���� ���� ����.
//�Է� : 20 \n 7 \n 23 ~~ \n 13
//��� : 7 \n 8 \n 10 ~~ \n 23
#include<cstdio>
#include<algorithm>
#include<iostream>
#define endl "\n"
using namespace std;

int a[9], s, x, xx;
int main() {
	for (int i = 0; i < 9; ++i)
		scanf("%d", &a[i]), s += a[i];
	s -= 100;
	sort(a, a + 9);
	for (int i = 0; i < 9; ++i) {
		if (binary_search(a, a + 9, s - a[i])) {
			x = a[i], xx = s - a[i];
		}
	}
	for (int i = 0; i < 9; ++i) {
		if (a[i] != x && a[i] != xx)
			printf("%d\n", a[i]);

	}
	return 0;
}



