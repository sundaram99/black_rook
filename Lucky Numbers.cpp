#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
    {
        int n;
        cin>>n;
        int fac=2;
        int flag=1;
        while(n>=fac)
        {
            if((n%fac)==0)
            {
                flag=0;
                break;
            }
            n=n-(n/fac);
            fac++;
        }
        cout<<flag<<endl;
    }
}
