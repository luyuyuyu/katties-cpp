//112228
//012227
//100001
#include <iostream>
#include <string>
using namespace std;

int main() {
	int standard[6] = {1, 1, 2, 2, 2, 8};
	int now[6];
	for (int i = 0; i < 6; ++i) {
		cin >> now[i];
		cout << standard[i] - now[i];
		cout << ' ';
	}
	return 0;
}
