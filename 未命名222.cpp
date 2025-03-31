#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define isd(c) ('0' <= (c) && (c) <= '9')
#define isa(c) ('a' <= (c) && (c) <= 'z')
#define isA(c) ('A' <= (c) && (c) <= 'Z')
#define mem(a, b) memset(a, b, sizeof a);
#define bug cout << endl << " .....here!...." << endl;
#define CLOSE ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define PI acos(-1)
#define F first
#define S second
#define endl "\n"
//#define N 100005   //注意0的个数 
//#define M 2000005
//#define mod 1000000007

//#pragma GCC optimize("O3")
//#define Time ((double)clock() / CLOCKS_PER_SEC <= 0.95)

using namespace std;
using namespace __gnu_cxx;
//using namespace __gnu_pbds;

//template<typename T> void read(T &x){x=0;char ch=getchar();ll f=1;while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}while(isdigit(ch)){x=x*10+(ch-'0');ch=getchar();}x*=f;}
//template<typename T,typename... Args> void read(T &x,Args&... args){read(x);read(args...);}
//template<typename T> void write(T x){if(x<0) putchar('-'),x=-x;if(x>9) write(x/10);putchar(x%10+'0');}
//template<typename T,typename... Args> void write(T x,Args... args){write(x);if(sizeof...(args)) putchar(' '),write(args...);}
int n,m;
ll sum;
/*void dfs(int u)
{
    if (u == n) 
    {
    	for(int i= 0;i<n;i++){
    		for(int j = 1;j<=m;j++){
    		//	s[p[i]][1] s[p[i]][2].....s[p[i]][m] 
    		sum + = s[p[i]][j] + sm;
			}
			sm += sum;
		}
		s[++cnt] = sum;
        return;
    }

    
    for (int i = 1; i <= n; i++)
        if (!st[i]) 
        {
            p[u] = i;    
            st[i] = true;    
            dfs(u + 1);      
            st[i] = false;   
        }
}
*/

int T;
const int N = 2e5+10;
int main() {
	CLOSE
	cin>>T;
	while(T--){
		ll n,m;
	//	ll s[n+10];
		ll sum = 0;
		ll sm = 0;
		cin>>n>>m;
		int a[n+10][m+10];
		ll s[n+10][m+10];
		int cnt  = 0;
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=m;j++){
				cin>>a[i][j];
				s[i][j] = s[i][j-1]+s[i][j];
			}
		}
		bool st[n+1];     
   		int p[n+1];
		   void dfs(int u){
		   

    if (u == n) 
    {
    	for(int i= 0;i<n;i++){
    		for(int j = 1;j<=m;j++){
    		//	s[p[i]][1] s[p[i]][2].....s[p[i]][m] 
    		sum + = s[p[i]][j] + sm;
			}
			sm += sum;
		}
		s[++cnt] = sum;
        return;
    }

    
    for (int i = 1; i <= n; i++)
        if (!st[i]) 
        {
            p[u] = i;    
            st[i] = true;    
            dfs(u + 1);      
            st[i] = false;   
        }
}

   		dfs(0);
   		ll mxsum = -1;
   		for(int i = 1;i<=n!;i++){
   			mxsum = max(sum,mxsum);
		   }
		cout<<mxsum<<endl;
	}
	
	return 0;
}
