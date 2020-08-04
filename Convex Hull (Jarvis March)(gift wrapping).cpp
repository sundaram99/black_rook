#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //cout<<" enter t "<<endl;
    cin>>t;
    for(int xy=1;xy<=t;xy++)
        {
    int n;
    //cout<<" number of points \n";
    cin>>n;
    vector<pair<int,int>> v1;
    int a,b;
    int mini=INT_MAX;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        //cout<<"proceed\n";
        cin>>a>>b;
        if(a<mini)
            {
            pos=i-1;
            mini=a;
            }
        v1.push_back(make_pair(a,b));
    }
    sort(v1.begin(),v1.end());
    vector<pair<int,int>> hull;
    if(n<=3)
        hull=v1;
    else
        {
    hull.push_back(v1[0]);
    pair<int,int> p1=hull[0];
    int cnt=0;
    while(3<4)
    {
        pair<int,int> q1;
        int x1,x2,y1,y2;
        if(cnt==0)
            q1=v1[1];
        else
            q1=v1[0];
        for(int i=0;i<v1.size();i++)
        {
            x1=p1.first-q1.first;
            x2=p1.first-v1[i].first;
            y1=p1.second-q1.second;
            y2=p1.second-v1[i].second;
            cout<<" p1 : "<<p1.first<<"  "<<p1.second<<endl;
            //cout<<" q1 : "<<q1.first<<"  "<<q1.second<<endl;
            //cout<<" v1[i] : "<<v1[i].first<<"  "<<v1[i].second<<endl;
            //cout<<((y2*x1)-(y1*x2))<<endl;
            if(((y2*x1)-(y1*x2))<0)
            {
                q1=v1[i];
                pos=i;
            }
        }
        int i;
        for(i=0;i<hull.size();i++)
        {
            if((hull[i].first==q1.first)&&(hull[i].second==q1.second))
                break;
        }
        if(i!=hull.size())
            break;
        else
            {
                //cout<<" q1.first is "<<q1.first<<" q1.second is "<<q1.second<<endl;
                hull.push_back(q1);
                //v1.erase(v1.begin()+pos);
                p1=q1;
            }
        cnt++;

    }
        }
    sort(hull.begin(),hull.end());
    cout<<hull[0].first<<"  "<<hull[0].second;
    for(int j=1;j<hull.size();j++)
        cout<<","<<hull[j].first<<" "<<hull[j].second;
    v1.clear();
    hull.clear();
        }
}
