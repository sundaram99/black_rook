#include <bits/stdc++.h>
using namespace std;

void mostFrequent(int arr[], int n)
{

	unordered_map<int, int> hash;
	for (int i = 0; i < n; i++)
		hash[arr[i]]=i;

	int max_count = 0, res = -1;
	for (auto i : hash)
        {
            cout<<i.first<<"  "<<i.second<<endl;
		}
}

int main()
{
	int arr[] = { 1, 5, 2, 1, 3, 2, 1, 15, 15 };
	int n = sizeof(arr) / sizeof(arr[0]);
	mostFrequent(arr, n);
	return 0;
}

