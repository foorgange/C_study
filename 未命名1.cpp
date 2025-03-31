#include<bits/stdc++.h>
using namespace std;
long long sum  = 0;
const int N = 2e5+10;
int T;
int n;
int x,y;
int a[N][3];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>T;
	while(T--){
		int ans = 0;
		sum = 0;
		cin>>n;
		for(int i = 1;i<=n;i++){
			cin>>x>>y;
			ans = max(ans,x);
			a[x][y] = 1;
		}
		for(int i = 0;i<ans;i++){
			if(a[i][0]&&a[i][1]){
				for(int j =i+1;j<=ans;j++){
					if(a[j][0])sum++;
					if(a[j][1])sum++;
				}
			}
			
			if(a[i][0]&&a[i-1][1]&&a[i+1][1])sum++;
			if(a[i][1]&&a[i-1][0]&&a[i+1][0])sum++;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
