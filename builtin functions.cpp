#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int c=__gcd(a,b);
    cout<<c<<endl;
    long long int x = a;
    cout << __lg(x)<<endl;
    cout << __builtin_ffs(x)<<endl;
    cout << __builtin_clz(x)<<endl;
    cout << __builtin_ctz(x)<<endl;
}
