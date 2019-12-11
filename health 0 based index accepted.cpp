#include <bits/stdc++.h>
using namespace std;

int main()
{
    	
    	long long t,i,j,k;
    	scanf("%lli",&t);
	for(int k=0;k<t;k++)
	{
		long long n,m;
		//cin>>n>>m;
		scanf("%lli%lli",&n,&m);
		long long a[n];
		long long b[m];
	//	vector<int>v1(n,-1);
		long long v1[n];
	
	//	vector<int>v1(n,-1);
	
		for(int i=0;i<n;i++)
		   v1[i]=-1;
		
		for(int i=0;i<n;i++)
		scanf("%lli",&a[i]);
		     // cin>>a[i];
			//a.push_back(temp);
		
		for(int j=0;j<m;j++)
		scanf("%lli",&b[j]);
		   // cin>>b[j];
			//b.push_back(temp);
	

		for(int j=0;j<m;j++)
		{
		
			for(int i=j;i<n;i+=(j+1))
			{
			
				if((a[i]<=b[j])&&(v1[i]==-1))
				{
				  
			
			     
			     	v1[i]=j+1;
			    
				}
			}
		
		}
		for(int i=0;i<n;i++)
		   printf("%lli\n",v1[i]);
		 // cout<<v1[i]<<endl;
	}
    return 0;
}

