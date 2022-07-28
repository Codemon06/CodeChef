#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char a[n];
	    cin>>a;
        int l = 0;
        for(int i=1;i<n;i++){
            int j = i;
            while(j>0 && a[j-1]>a[j]){
                swap(a[j],a[j-1]);
                j--;
                l++;
            }
        }
        if(l<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
