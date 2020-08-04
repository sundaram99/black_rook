#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a,b;
    vector<pair<int,int>> v1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v1.push_back(make_pair(a,b));
    }
    sort(v1.begin(),v1.end(),sortbysec);
    int start=0,cnt=0;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        if(v1[i].first>=start)
        {
            v2.push_back(i);
            start=v1[i].second;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<"  "<<endl;
    }
}
