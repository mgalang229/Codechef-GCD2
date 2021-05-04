#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	return GCD(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a;
		string b;
		cin >> a >> b;
		if (a == 0) {
			// if 'a' is equal to 0, then the answer is 'b' itself
			cout << b;
		} else {
			int num = 0;
			for (int i = 0; i < (int) b.size(); i++) {
				// calculate the number equivalence of the string taking
				// consideration of the using 'num' modulus 'a' for each process
				num = ((num * 10) + (b[i] - '0')) % a;
			}
			// print the GCD (Greatest Common Divisor) of 'a' and 'num'
			cout << GCD(a, num);
		}
		cout << '\n';
	}
	return 0;
}
