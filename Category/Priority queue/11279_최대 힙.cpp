#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n, i, temp;

	cin >> n;
	priority_queue<int> heap;

	for (i = 0; i < n; i++) {
		scanf_s("%d", &temp);

		if (!temp) {
			if (heap.empty()) printf("0\n");
			else {
				printf("%d\n", heap.top());
				heap.pop();
			}
		}
		else heap.push(temp);
	}

	return 0;
}