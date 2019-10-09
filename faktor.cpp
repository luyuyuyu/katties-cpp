#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int publish, impact;
	scanf ("%d %d", &publish, &impact);
	printf("%d", publish * impact - (publish - 1));
	return 0;
}
