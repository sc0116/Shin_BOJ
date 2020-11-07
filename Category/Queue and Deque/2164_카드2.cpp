#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	int n;

	cin >> n;

	deque<int> arr;

	for (int i = n; i > 0; i--) {
		arr.push_front(i);
	}

	while (arr.size() != 1) {
		arr.pop_front();
		int temp = arr.front();
		arr.pop_front();
		arr.push_back(temp);
	}

	cout << arr.front() << endl;

	return 0;
}