#include <iostream>
using namespace std;

int main() {
	int count = 0, n, a;
	scanf("%d\n", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a);
		if (a < 0) ++count;
	}
	printf("%d\n", count);
	return 0;
}
