#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int h,n;
    cin>>h>>n;
    int endi=pow(2,h);
    int start=1;
    int num=0;
    int sum=1;
    int aa=(h);
    while(aa>0)
    {
        int mid=(endi+start)/2;
        int ff=(pow(2,aa)-1);
        //cout<<" ff is "<<ff<<" sum is "<<sum<<" start is "<<start<<" mid is "<<mid<<" end is "<<endi<<" num is "<<num<<endl;
        if(num==0)
        {
            if(n<=mid)
            {
                endi=mid;
                num=1;
            }
            else
            {
                sum=sum+ff;
                start=mid+1;
                num=0;
            }
            sum++;
        }
        else if(num==1)
        {
            if(n>mid)
            {
                start=mid+1;
                num=0;
            }
            else
            {
                sum=sum+ff;
                endi=mid;
                num=1;
            }
            sum++;
        }
        aa--;
    }
    cout<<(sum-1)<<endl;
}
