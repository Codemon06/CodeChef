#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	    }
	    int sub=0,ans=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]==1&&a[i+1]==1)
	        {
	            sub++;
	        }
	        else if(a[i]==1)
	        {
	            sub++;
	        }
	        else
	        {
	            ans+=sub+(sub+1)/2;
	            sub=0;
	        }
	    }
	    if(a[n-1]==1)
	    {
	        sub++;
	    }
	    else
	    {
	        ans+=sub+(sub+1)/2;
	        sub=0;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}