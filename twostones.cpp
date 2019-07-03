#include <iostream>
using namespace std;

int main() {
	long leftStone;
	cin >> leftStone;
	if (leftStone % 2 == 0) cout << "Bob";
	else cout << "Alice";
	return 0;
}
