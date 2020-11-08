//반복문에서 cin, cout 사용하면 시간 초과임.
//scanf, printf같은 빠른 입출력함수 사용하면 시간 초과 X.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m, temp = 0;

	cin >> n;
	vector<int> arrN(n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arrN[i]);
	}
	sort(arrN.begin(), arrN.end());

	cin >> m;

	for (int j = 0; j < m; j++) {
		scanf_s("%d", &temp);
		printf("%d\n", (binary_search(arrN.begin(), arrN.end(), temp) ? 1 : 0));
	}

	return 0;
}