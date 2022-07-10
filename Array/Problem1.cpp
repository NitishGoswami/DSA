/* 
Create an Array of size 10 of integers. Take input from the user for these
10 elements and print the entire array after that.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

	// Intitialize a vector of size 10;
	vector<int> v(10);

	// Taking Input in array 
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}

	// Printing Array using iterator
	for(auto it:v)
		cout<<it<<"\t";
	return 0;
}