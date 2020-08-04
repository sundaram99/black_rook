#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    long long int sum=0;
    for(int i=0;i<(n-1);i++)
    {
        sum=((sum+a[i])*x)%mod;
    }
    sum=sum+a[n-1];
    cout<<sum%mod<<endl;
}
