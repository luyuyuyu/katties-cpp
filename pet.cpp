#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int sum, a1, a2, a3, a4, point = 0, winner = -1;
	for (int i = 0; i < 5; ++i) {
		scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
		sum = a1 + a2 + a3 + a4;
		if (sum > point) {
			winner = i + 1;
			point = sum;
		}
	}
	printf("%d %d", winner, point);
	return 0;
}
