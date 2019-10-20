//Lucky Permutation Triple
#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n;
	cin >> n;
	int a[n], b[n], c[n];
	if (n & 1) {
		int j = n / 2;
		for (int i = 0; i < n / 2; i++) {
			b[i] = j * 2 - 1;
			j--;
		}
		for (int i = n - 1; i > floor(n / 2) - 1; i--) {
			b[i] = (n - 1 - i) * 2;
		}	

		for (int i = 0; i < n; i++) {
			a[i] = i;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			c[i] = (a[i] + b[i]) % n;
			cout << c[i] << " ";
		}
		cout << endl;
	}

	else
		cout << "-1" << endl;

	return 0;
}