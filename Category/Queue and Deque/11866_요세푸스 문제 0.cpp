#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	int n, k, temp = 0;

	cin >> n >> k;

	deque<int> arr;

	for (int i = n; i > 0; i--) {
		arr.push_front(i);
	}

	cout << "<";
	while (!arr.empty()) {
		for (int j = 0; j < k; j++) {
			temp = arr.front();
			if (j != k - 1) {
				arr.push_back(temp);
			}
			arr.pop_front();
		}
		cout << temp;
		if (!arr.empty())
			cout << ", ";
	}
	cout << ">";

	return 0;
}