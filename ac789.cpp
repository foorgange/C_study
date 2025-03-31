#include<bits/stdc++.h>
using namespace std;

const int N = 1e9+100;
int s[N][N],a[N][N];
int x,y,w;
int main() {

	int n,m,q;
	cin>>n>>m>>q;

	for(int i = 1;i<=n;i++){
		for(int j =1;j<=m;j++){
			cin>>a[i][j];
			s[i][j] = s[i-1][j]+ s[i][j-1]+a[i][j] - s[i-1][j-1];//二维前缀和模板数组
		}
	}
		
	int x1,y1,x2,y2;
	for(int i = 1;i<=q;i++){
		cin>>x1>>y1>>x2>>y2;
		cout<<s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1]<<endl; //求从x1,y1到x2,y2的区域和
	}
	
	return 0;
}
