/*
	Write a program to sort the given array.
*/
#include<bits/stdc++.h>
using namespace std;
void sortArr(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=1;j<arr.size();j++){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
		}
	}
}

void printArr(vector<int> arr){
	for(auto it:arr)
		cout<<it<<"\t";
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

		sortArr(v);
		printArr(v);


	}
	return 0;
}