#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[100], n, sum=0, pos=0;
		cin >> n;
		for(int i=1; i<=n; ++i) {
			cin >> a[i];
			sum+=a[i];
			if(a[i]%2)
				pos=i;
		}
		if(sum%2==0) {
			cout << n << "\n";
			for(int i=1; i<=n; ++i)
				cout << i << " ";
			cout << "\n";
		} else {
			if(n==1)
				cout << -1 << "\n";
			else {
				cout << n-1 << "\n";
				for(int i=1; i<=n; ++i) {
					if(i==pos)
						continue;
					else
						cout << i << " ";
				}
				cout << "\n";
			}
		}
	}
}
