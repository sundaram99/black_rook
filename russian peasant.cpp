#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    while(a>0)
    {
        if((a%2)!=0)
            res=res+b;
        a=a>>1;
        b=b<<1;
    }
    cout<<res<<endl;
}
