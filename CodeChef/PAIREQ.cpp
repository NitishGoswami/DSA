#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;

	    int arr[n];
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
	    }
	    

	    map<int,int> itemCount;
	    int maxCount=0;

	    for(int i=0;i<n;i++){
	    	itemCount[arr[i]]++;
	    	maxCount=max(maxCount,itemCount[arr[i]]);
	    }
	    cout<<n-maxCount<<endl;

	}
	return 0;
}

