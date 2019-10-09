#include <iostream>
using namespace std;

int main() {
	int x, n, pi, left = 0;
	scanf("%d\n%d", &x, &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &pi);
		left += x - pi;
		if (left <= 0) left = 0;
	}
	printf("%d", left + x);
	return 0;
}
