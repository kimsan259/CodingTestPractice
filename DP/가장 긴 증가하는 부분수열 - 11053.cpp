#include <iostream>
#define endl "\n"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int MAX(int a, int b) { return a > b ? a : b; }
int main()
{
	int d[1000] = { 0 };
	int a[1000] = { 0 };
	int ans = 0; int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int k = 0; k < i; k++) {
			if (a[i] > a[k]) {
				d[i] = MAX(d[i], d[k] + 1);
			}
		}
		ans = MAX(ans, d[i]);
	}
	printf("%d", ans);
}

