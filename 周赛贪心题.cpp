#include<bits/stdc++.h>

using namespace std;

const int N=3*1e5+100;
long long a[N];
long long n,m;
long long  sum;

bool cmp(int x,int y)
{
 return x>y;
}
int  main(){
   cin>>n;
   for (int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   cin>>m;
   sort(a,a+n,cmp);
   while (m--)
   {
        long long q;
        cin>>q;
        cout<<sum-a[q-1]<<endl;
   }
   
     
}


/*
我的超时版本

#include<bits/stdc++.h>
using namespace std;
bool cmp (int a,int b);
int main() {
	int n;
	cin>>n;
	int m;
	int nn;
	vector<int>v(n);
	int b;
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	cin>>m;
	for(int i = 0;i<m;i++){
		cin>>b;
		 nn = v[b-1];
		v[b-1] = 0;
		int sum = 0;
		for(int i = 0;i<n;i++){
			sum+=v[i];
		}
		cout<<sum<<endl;
		v[b-1] = nn;
	}
	
	
	
	
	return 0;
}
bool cmp(int a,int b){
    return a>b;
}


*/