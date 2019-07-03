#include <iostream>//iostream is header file, also called include file; the statement is a prepocessor directive
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; ++i) 
		cout << i << " Abracadabra" << endl;
	return 0;
}
