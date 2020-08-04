#include<bits/stdc++.h>
using namespace std;
#define int long long
int maxi=0;
void pallindrome(string s,int len,int i,int j)
{
    //cout<<" i is "<<i<<" j is "<<j<<" len is "<<len<<endl;
    maxi=max(maxi,len);
    if(j<i)
        return;
    if(s[i]==s[j])
        {
            if(i!=j)
                pallindrome(s,(len+2),(i+1),(j-1));
            else
                pallindrome(s,(len+1),(i+1),(j-1));
        }
    else
    {
        pallindrome(s,(len),(i+1),(j));
        pallindrome(s,(len),(i),(j-1));
    }
}
int32_t main()
{
    string s;
    cin>>s;
    int n=s.length();
    pallindrome(s,0,0,(n-1));
    cout<<maxi<<endl;
}
