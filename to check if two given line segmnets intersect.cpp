#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
        {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int ax1,ax2,ay1,ay2;
    ax1=x1-x2;
    ax2=x1-x3;
    ay1=y1-y2;
    ay2=y1-y3;
    int pro=ay2*ax1-ax2*ay1;
    ax2=x1-x4;
    ay2=y1-y4;
    int pro2=ay2*ax1-ax2*ay1;
    int flag=0;
    //cout<<" pro is "<<pro<<" pro2 is "<<pro2<<endl;
    if((pro==0)&&(pro2==0))
    {
        if(min(x1,x2)<min(x3,x4))
        {
            if(max(x1,x2)>=min(x3,x4))
                flag=1;
        }
        else
        {
            if(max(x3,x4)>=min(x1,x2))
                flag=1;
        }
    }
    if((pro==0)||(pro2==0))
    {
        //cout<<" inside if part\n";
        if(pro==0)
        {
            if((x3>=min(x1,x2))&&(x3<=max(x1,x2)))
                flag=1;
        }
        if(pro2==0)
        {
            if((x4>=min(x1,x2))&&(x4<=max(x1,x2)))
                flag=1;
        }
    }
    else
    {
        if((pro*pro2)<0)
        {
            ax1=x3-x4;
            ax2=x3-x1;
            ay1=y3-y4;
            ay2=y3-y1;
            pro=ay2*ax1-ax2*ay1;
            ax2=x3-x2;
            ay2=y3-y2;
            pro2=ay2*ax1-ax2*ay1;
            //cout<<" pro is "<<pro<<" pro2 is "<<pro2<<endl;
            if((pro==0)||(pro2==0))
            {
                if(pro==0)
                  {
                      if((x1>=min(x3,x4))&&(x1<=max(x3,x4)))
                          flag=1;
                  }
                if(pro2==0)
                   {
                      if((x2>=min(x3,x4))&&(x2<=max(x3,x4)))
                           flag=1;
                   }
            }

            else if((pro*pro2)<0)
            {
                //cout<<"hell\n";
                flag=1;
            }
            //cout<<"flag is "<<flag<<endl;
        }
    }
    cout<<flag<<endl;
        }
}
