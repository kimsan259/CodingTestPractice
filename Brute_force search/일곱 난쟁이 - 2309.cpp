//일곱 난쟁이의 키의 합이 100이 된다
//아홉 난쟁이의 키가 주어졌을 때, 일곱 난쟁이를 찾는 프로그램
//입력 : 아홉 개의 줄에 거쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수, 아홉 난쟁이의 키는 모두 다르며, 가능한 정답이 여러가지인 경우에는 아무거나 출력
//출력 : 일곱 난쟁이의 키를 오름차순으로 출력. 일곱 난쟁이를 찾을 수 없는 경우는 없다.
//입력 : 20 \n 7 \n 23 ~~ \n 13
//출력 : 7 \n 8 \n 10 ~~ \n 23
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



