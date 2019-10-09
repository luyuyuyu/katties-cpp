#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, p, x = 0.0, num, power;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf ("%d", &p);
		num = p / 10;
		power = p % 10;
		x += (int)pow((double)num, (double)power);
	}
	printf("%d", x);
	return 0;
}//avg life expectancy longer today 
