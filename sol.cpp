#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the array in non-decreasing order
	sort(a.begin(), a.end());
	// find the median value
	cout << a[n / 2] << '\n';
	return 0;
}
