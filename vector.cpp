#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);
	cout << "Output of begin and end: ";
	for(vector<int> :: iterator i=(g1.end()-1); i != g1.begin(); --i)
		cout << *i << " ";
    cout<<g1[0]<<endl;
    int s=g1.size();
    int maxi=g1.max_size();
    cout<<"\t"<<s<<"\t"<<maxi<<"\t"<<g1.capacity()<<endl;
    g1.push_back(45);
    g1.push_back(54);
    g1.push_back(63);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.resize(6);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.resize(8);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.resize(12,9);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.pop_back();
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    //g1.shrink_to_fit();
    g1.insert(g1.begin()+2,55);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.erase(g1.begin()+4,g1.begin()+9);
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    g1.clear();
    for(int i=0;i<g1.size();i++)
        cout<<g1[i]<<"\t";
    cout<<endl;
    cout<<g1[4];
}
