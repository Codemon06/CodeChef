#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int max = a[0];
	    for(i=0;i<n;i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        int count = 0;
        for(i=0;i<n;i++){
            if(a[i]==max){
                count++;
            }
        }
        if(count==1){
            cout<<"peace:)"<<endl;
        }
        else{
            cout<<"fight:("<<endl;
        }
	}
	return 0;
}
