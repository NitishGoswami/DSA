#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cin.ignore();
	    string s;
	    getline(cin,s);
	    
	    for(int i=0;i<n;i++){
	        switch(s[i]){
	            case 'A':
	                s[i]='T';
	                break;
	           case 'T':
	                s[i]='A';
	                break;
	           case 'C':
	                s[i]='G';
	                break;
	           case 'G':
	                s[i]='C';
	                break;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}

