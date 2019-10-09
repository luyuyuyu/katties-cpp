#include <iostream>
using namespace std;
int main() {
	int n, x;
	scanf("%d\n", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &x);
		printf("%d is %s\n", x, x % 2 == 0 ? "even" : "odd");
	}
	return 0;
}
