// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int arrTempP[n];
        int arrTempN[n];
        int i=0;
        int j=0;
        int k=0;
        for(; i<n; ++i)
        {
          if(arr[i]>0)
          {
            arrTempP[j]=arr[i];
            ++j;
         
          }
        }
       
        for(k=0,i=0; i<n; ++i)
        {
          if(arr[i]<0)
          {
             
            arrTempN[k]=arr[i];
            ++k;
          }
        }
        
        
        for(i=0; i<j; ++i)
        {
            arr[i]=arrTempP[i];
           
        }
        
     
         for(i=0; j<n; ++j,++i)
        {
            arr[j]=arrTempN[i];
           
        }
        
        
        
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends