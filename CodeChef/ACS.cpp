#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int totalScore;
	    cin>>totalScore;
	    
	    int ans=0;
	    
	    while(totalScore>=100){
	        totalScore-=100;
	        ans++;
	    }
	    if(totalScore+ans<=10)
	        ans=ans+totalScore;
	    else
	    	ans=-1;
	    cout<<ans<<endl;
	}
	return 0;
}

