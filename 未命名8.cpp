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
int T;
const ll N = 2e5+10;
ll a[N];
ll s;
int main() {
	CLOSE
	cin>>T;
	while(T--){
		//int a[N],b[N];
		int cc = 0;
		int n,m;
		cin>>n>>m;
		
		for(int i = 1;i<=n;i++)cin>>a[i];
		cin>>s;
		if(n==1){
			cout<<"NO"<<endl;
			continue;
		}
		
		for(int i = 1;i<n;i++){
			if(cc == -1){
				break;
			}
			if(a[i]>a[i+1]&&(s-a[i])<a[i]){
				a[i] = s-a[i];
				
			}
			if(i>1&&a[i]<a[i-1]&&(s-a[i])>=a[i-1]){
					a[i] = s-a[i];
			}
			if(i>1&&a[i]<a[i-1]){
				cc = -1;
			}
			
		}
		if(a[n]<a[n-1]){
			cc = -1;
		}
		if(cc==-1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
		
	}
	
	return 0;
}
