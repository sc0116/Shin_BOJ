#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int k, temp, sum = 0;
	stack<int> st;

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> temp;
		if (!temp) st.pop();
		else st.push(temp);
	}

	while (st.size() > 0) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;
	return 0;
}