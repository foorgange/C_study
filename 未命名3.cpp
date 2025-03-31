#include<bits/stdc++.h>
using namespace std;
int T;
const int N = 2e5 + 10;
int n,x;
int a[N];
bool check(int mid){
    long long ba=0,cnt=0;
    for(int i=2;i<=n;i++){
        ba+=x;
        if(a[i]<=ba)ba-=a[i],cnt++;
        if(cnt>=mid)return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T;
    while(T--){
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        int l=0,r=n;
        while(l<=r){
            int mid=(l+r+1)/2;
            if(check(mid)){
                l=mid;
            }else{
                r=mid-1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}

