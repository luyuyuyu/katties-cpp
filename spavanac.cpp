#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int hour, minute;
	scanf("%d%d", &hour, &minute);
	if (minute < 45) {
		if (hour == 0) hour = 23;
		else hour -= 1;
		minute += 60 - 45;
	}
	else minute -= 45;
	printf("%d %d", hour, minute);
	return 0;
}
