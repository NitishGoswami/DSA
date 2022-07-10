/*
	Find the minimum and maximum element in an array.
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> findMinMax(vector<int> arr){
	int Min = INT_MAX;
	int Max = INT_MIN;

	for(auto it : arr){
		Min = min(Min,it);
		Max = max(Max,it);
	}
	pair<int,int> ans(Min,Max);
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);

		for(int i=0;i<v.size();i++){
			cin>>v[i];
		}

		pair<int,int> ans=findMinMax(v);
		cout<<ans.first<<"\t"<<ans.second;
	}
	return 0;
}