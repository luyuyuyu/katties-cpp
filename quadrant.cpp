#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d\n%d", &a, &b);
	if (a > 0) printf("%d\n", b > 0 ? 1 : 4);
	else printf("%d\n", b > 0 ? 2 : 3);
	return 0;
}
