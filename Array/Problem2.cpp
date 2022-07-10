/*
2) Check whether n is present in an array of size m or not.
Input - n,m (Input number, size of array)
- Take input n elements for the array
Output -> true/false
*/

#include<bits/stdc++.h>
using namespace std;

// Function for searching given element in array
bool search(vector<int> arr,int x){
	for(auto it: arr){
		if(it == x)
			return true;
	}
	return false;
}

int main(){

	int n,m;
	cin>>n>>m;

	// Taking User Input in array
	vector<int> v(m);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}

	cout<<search(v,n);



			
	return 0;
}