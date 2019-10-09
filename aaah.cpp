#include <iostream>
#include <string>
using namespace std;

int main() {
	string able, want;
	cin >> able;
	cin >> want;
	//scanf("%s\n%s", &able, &want);
	printf("%s", able.length() >= want.length() ? "go" : "no");
	return 0;
}
