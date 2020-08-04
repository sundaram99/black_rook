#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n;
set<pair<int, int> > s;

int main()
{
	IOS;
	cin>>n;
	int x[n],y[n];
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i-1]>>y[i-1];
		s.insert({abs(x[i-1]) + abs(y[i-1]), i});
		if((x[i-1]!=0)&&(y[i-1]!=0))
            ans=ans+6;
        else
            ans=ans+4;
	}
	cout<<ans<<endl;
	for(auto it:s)
	{
		int idx=it.second;
		//cout<<" idx is "<<idx<<endl;
		int x1=x[idx-1];
		int y1=y[idx-1];
		//cout<<x1<<endl;
		int distx=abs(x1);
		int disty=abs(y1);
		//cout<<" distx is "<<distx<<endl;
		if(distx>0)
	 		cout<<"1 "<<distx<<" "<<(x[idx-1]>0?"R":"L")<<endl;
		if(disty>0)
	 		cout<<"1 "<<disty<<" "<<(y[idx-1]>0?"U":"D")<<endl;
		cout<<"2"<<endl;
		if(distx>0)
	 		cout<<"1 "<<distx<<" "<<(x[idx-1]>0?"L":"R")<<endl;
		if(disty>0)
	 		cout<<"1 "<<disty<<" "<<(y[idx-1]>0?"D":"U")<<endl;
		cout<<"3"<<endl;
	}
	return 0;
}
