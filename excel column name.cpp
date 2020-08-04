#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int res=0;
        int dig=1;
        while(res<n)
        {
            res=res+pow(26,dig);
            dig++;
            //cout<<" res is "<<res<<" dig is "<<(dig-1)<<endl;
        }
        dig--;
        res=res-pow(26,dig);
        //cout<<" res is "<<res<<endl;
        n=n-res;
        //cout<<" n is "<<n<<" dig is "<<dig<<endl;
        string s="";
        while(dig>0)
        {
            char a='A';
            int num;
            if(n%26==0)
                num=25;
            else
                num=n%26-1;
            a=a+num;
            if(n%26!=0)
                n=(n/26)+1;
            else
                n=n/26;
            s.push_back(a);
            dig--;
        }
        for(int j=(s.size()-1);j>=0;j--)
            cout<<s[j];
        cout<<endl;
    }
}

