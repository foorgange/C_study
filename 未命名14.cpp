#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define mem(a, b) memset(a, b, sizeof a);
#define bug cout << endl << " .....here!...." << endl;
#define CLOSE ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define PI acos(-1)
#define F first
#define S second
#define endl "\n"

using namespace std;
using namespace __gnu_cxx;

int T;
ll a[15];
const ll mod = 1e9+7;
int main() {
    CLOSE
    cin>>T;
    while(T--){
        vector<int> b;
        ll m;
        cin>>m;
        int cnt = 0;
        for(int i = 0;i<=9;i++){
            cin>>a[i];
        }
        ll c = a[0];
        
        
        if(m==1&&c!=0){
            cout<<0<<endl;
            continue;
        }
        int mmm = 1;
        for(int i = 1;i<=9;i++){
            if(a[i]!=0&&cnt<m){
                b.push_back(i);
                a[i]--;
                mmm = i;
                cnt++;
                break;
            }
        }
        while(c--&&cnt<m){
                  b.push_back(0);
                cnt++;
        }
        
        
        
        for(int i = mmm;i<=9&&cnt<m;i++){
                while(a[i]!=0&&cnt<m){
                     a[i]--;
                     cnt++;
                     b.push_back(i);;
                 }
            }
        ll result = 0; int cc = 1;
            for (int i = b.size();i>0;i--) {
                
            result = (result * cc + result) %mod;
            cc *= 10;
        }
        cout<<result<<endl;
        
    }
    
    return 0;
}








