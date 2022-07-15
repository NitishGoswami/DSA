#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}
}

void printArr(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		selectionSort(arr,n);
		printArr(arr,n);
	}
	return 0;
}