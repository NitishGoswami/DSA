/*
	Write a program to reverse the array.
*/
#include<bits/stdc++.h>
using namespace std;

void revreseArr(vector<int> &arr){
	int s=0;
	int e=arr.size()-1;
	while(s<=e){
		swap(arr[e],arr[s]);
		s++;
		e--;
	}
}

void printArr(vector<int> arr){
	for(auto it:arr){
		cout<<it<<"\t";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}

		revreseArr(v);
		printArr(v);

	}
	return 0;
}