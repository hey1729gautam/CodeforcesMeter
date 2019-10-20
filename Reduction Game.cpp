//Reduction Game
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		int n, k, sum = 0, x = -1;
		cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort (a, a + n);
		for (int i = 0; i < n - 1; i++) {
			if(a[i] > k) {
				x = i;
				break;
			}
		}
		for (int i = x; i < n - 1; i++) {
			a[i + 1] -= a[i] - k;
		}
		a[x] -= k;

		for (int i = 0; i < n; i++) {
			cout << a[i] << endl;
		}

		for (int i = 0; i < n; i++) {
			sum += a[i];
		}

		cout << sum << endl;

	}
	return 0;
}