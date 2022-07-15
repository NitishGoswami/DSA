#include<bits/stdc++.h>
using namespace std;


/*
Bubble Sort is beginner friendly sorting technique
Basic idea is to compare adjacent elements and moves the
largest element to the bottom of list in evey pass
*/
//Function  for bubble sort

void bubbleSort(int arr[] ,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void printArr(int arr[] ,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
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

		bubbleSort(arr,n);
		printArr(arr,n);

	}
	return 0;
}