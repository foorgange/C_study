#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int mp[210][210]; 
bool st[210][210];
int d[210][210];
typedef pair<int,int> PII;
PII q[210*210];
PII pre[210][210];
//int cntt[3];
//int antt[3];
int antt = 0;
int ans[210*210];
int an = -1;
int answe = -1;

void bfs(){
	int hh = 0,tt = -1;
	q[++tt] = {1,1};
	st[1][1] = true;
	d[1][1] += mp[1][1];
	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,1,0,-1};
	while(hh<=tt){
		PII t = q[hh++];
		for(int i = 0;i<4;i++){
			
			int x = t.first + dx[i],y = t.second+ dy[i];
			if(x>=1&&x<=n&&y>=1&&y<=m&&!st[x][y] &&antt+1<k){
//				if(antt[i]==1||antt[i]==-1){
//					cntt[i]++;
//				}else{
//					cntt[i] = 0;
//					antt[i] = 0;
//				}
				
				d[x][y] = d[t.first][t.second] + mp[x][y];
				pre[x][y] = t;
				if((x-t.first)==(t.first-pre[t.first][t.second].first)&&(y-t.second)==(t.second-pre[t.first][t.second].second)){
					antt++;
				}else{
					antt = 1;
				}
				q[++tt] = {x,y};
				st[x][y] = true;
					//antt[i] = 1;
				
				
				if(x==n&&y==m)ans[++an] = d[n][m];
			
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n>>m>>k;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	//for(int i = 0;i<3;i++){
	//	antt[i] = -1;
	//}
	bfs();
if(an == -1){
	cout<<"No Answer!"<<endl;
}else{
	for(int i = 0;i<=an;i++){
		answe = max(answe,ans[i]);
	}
	cout<<answe<<endl;
}
	
	
	
	return 0;
}
