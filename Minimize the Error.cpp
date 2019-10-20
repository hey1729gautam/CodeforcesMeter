//Minimize the Error
#include <iostream>
#include <algorithm>
using namespace std;
int main () {


	#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("outp.txt", "w", stdout);
	#endif
		

 	
	int n, k_1, k_2;
	cin >> n >> k_1 >> k_2;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		c[i] = abs (a[i] - b[i]);
	}

	sort (c, c + n);
	int sum = 0, e = 0;
	for (int i = 1; i < n; i++) {
		if (sum += i * (a[i - 1] - a[i]) < k_1 + k_2) {
			sum += i * (a[i - 1] - a[i]);
		}
		else {
			e = i - 1;
			break;
		}
	}

	for (int i = 0; i < e; i++) {
		c[i] = c[e];
	}

	int k = k_1 + k_2; bool f = 0;
	k -= sum;

	while (1) {
		for (int i = 0; i < e; i++) {
			a[i]--;
			k--;
			if (k < 0) {
				f = 1;
				break;
			}
		}
		if (f = 1) {
			break;
		}
	}

	sum = 0;

	for (int i = 0; i < n; i++) {
		sum += c[i] * c[i];
	}

	cout << sum << endl;
	return 0;

}