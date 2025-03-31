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
int main() {
	CLOSE
	cin>>T;
	while(T--){
		
		string a;
		cin>>a;
		int b = a.size();
		int cs = -1;
		int m = 1;
		
		if(b==1){
			cout<<'1'<<endl;
			m = 2;
		}
	if(m==1){
	
		for(int i = 0;i<=b-2;i++){
			if(a[i]==a[i+1]){
				cs = 1;
			}else{
				cs = 0;
			}
		}
		
		if(cs == 1){
			cout<<'1'<<endl;
		}
		if(cs == 0){
			cout<<b<<endl;
		}
	}
	}
	
	return 0;
}



