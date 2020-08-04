#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int mod=1000000007;
int32_t main()
{
    int a,b;
    cin>>a>>b;
    int rem=b-1;
    int sum=0;
    int incr=1;
    int add=b+1;
    for(int i=(b+1);i<(2*b);i++)
    {
        int d=(incr*b)%mod;
        sum=(sum+((a*(2*add+(a-1)*d)))/2)%mod;
        incr++;
        add=(add+b+1)%mod;
    }
    cout<<sum<<endl;
}
