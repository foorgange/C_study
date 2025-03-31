
#include<bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	 cin>>n;
    cin>>a1>>b1;//输入第一包有a1支铅笔，和第一包的价钱b1
    cin>>a2>>b2;//输入第二包有a2支铅笔，和第二包的价钱b2
    cin>>a3>>b3;//输入第三包有a3支铅笔，和第三包的价钱b3
    c1=n/a1;//求最多能买几包
    if (n%a1!=0) c1=c1+1;//如果还不够，再买多一包
    a[1]=b1*c1;//求出买够n支铅笔的c1包要多少钱
    c2=n/a2;//同上
    if (n%a2!=0) c2=c2+1;//同上
    a[2]=b2*c2;//同上
    c3=n/a3;//同上
    if (n%a3!=0) c3=c3+1;//同上
    a[3]=b3*c3;//同上
    sort(a+1,a+1+3);//本人懒，你无法理解，直接用sort（ni neng nai wo ru he）
    cout<<a[1]<<endl;//直接输出最便宜的
	
	return 0;
}
