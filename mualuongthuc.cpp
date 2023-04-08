#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s , m;
		cin >> n >> s >> m;
		int ans = 0;
		int luongthuc = 0;
		int tuan = s/7;
//		cout << tuan << endl;
		int ngayconlai = s - 7*tuan;
		if(n < m){
			cout << -1 << endl;
		} else {
			for(int i = 0; i < tuan; i++){
				luongthuc = luongthuc + 6*n - 7*m;
				if(luongthuc < 0){
					ans = -1;
					break;
				} 
			}
			if(ans >= 0){
				ans = m*s/n;
				double com = (double)m*s/n;
				if (ans < com){
					ans++;
				}
			}
			cout << ans << endl;
		}
	}
}
