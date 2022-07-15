/*
	insertion Sort
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && temp<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
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

		insertionSort(arr,n);
		printArr(arr,n);
	}
	return 0;
}