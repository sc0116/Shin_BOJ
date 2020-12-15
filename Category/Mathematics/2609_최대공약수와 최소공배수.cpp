#include <iostream>

using namespace std;

int GCD(int n1, int n2) { //GCD is 최대공약수, LSD is 최소공배수
	return n2 ? GCD(n2, n1 % n2) : n1;
}

int LCM(int n1, int n2) {
	return n1 * n2 / GCD(n1, n2);
}

int main(void) {
	int num1, num2;

	cin >> num1 >> num2;

	cout << GCD(num1, num2) << endl;
	cout << LCM(num1, num2) << endl;

	return 0;
}
