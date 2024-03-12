#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';

int main()
{

	// practicing loop and arrString 

	int m, w; cin >> m >> w;
	const char* arr[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	for (int i = 1; i <= m; i++ ) {
		cout << "Month: " << i << sesh;
		for (int j = 1; j <= w; j++) {
			cout << "\tweek: " << j << sesh;
			for (auto elem : arr) {
				cout << "\t\t Day: " << elem << sesh;
			}
		}
	}


	return 0;
}