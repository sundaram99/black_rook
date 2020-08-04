#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int jj=1;jj<=t;jj++)
        {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    for(int i=0;i<n;i++)
        v.push_back(make_pair(arr1[i],arr2[i]));
    sort(v.begin(),v.end());
    int maxi=INT_MAX;
    int cnt=0;
    vector<int> v1;
    int ind=0;
    for(int i=0;i<(n);i++)
    {
        if((v1.size()>0)&&(v1[ind]<v[i].first))
            {
                   v1[ind]=v[i].second;
            }
        else
        {
            cnt++;
            v1.push_back(v[i].second);
        }
        ind= min_element(v1.begin(),v1.end()) - v1.begin();
        //cout<<" ind is "<<ind <<endl;
    }
    cout<<cnt<<endl;
        }
}
