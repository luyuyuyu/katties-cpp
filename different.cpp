#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    long long a, b;//initiate long int by using longlong
    while (scanf("%lld%lld", &a, &b) == 2) {
        printf("%lld\n", a - b > 0 ? a - b : b - a);
    } 
    return 0;
}

/*#include <stdio.h>

int main()
{
	long long a, b;
	while (scanf("%lld%lld", &a, &b) == 2) printf("%lld\n", b < a ? a - b : b - a);
	return 0;
}*/
