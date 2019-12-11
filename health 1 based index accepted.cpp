#include <bits/stdc++.h>

using namespace std;
int main()
{
    	long long t,i,j,k;
    	scanf("%lli",&t);
	for( k=0;k<t;k++)
	{
		
		long long n,m;
		//cin>>n>>m;
		scanf("%lli%lli",&n,&m);
		long long a[n+1];
		long long b[m+1];
	//	vector<int>v1(n,-1);
		long long v1[n];
		for(i=1;i<=n;i++)
		   v1[i]=-1;
		
		for( i=1;i<=n;i++)
		      //cin>>a[i];
		      scanf("%lli",&a[i]);
			//a.push_back(temp);
	//	int j
		for( j=1;j<=m;j++)
		   // cin>>b[j];
		    scanf("%lli",&b[j]);
			//b.push_back(temp);
	
      
		for(j=1;j<=m;j++)//day
		{
		   // int i;
		   
			for( i=j;i<=n;i+=j)//health
			{
				if((a[i]<=b[j])&&(v1[i]==-1))		  
			     
			     	v1[i]=j;
			}
			
		
		
		}
		for( i=1;i<=n;i++)
		 printf("%lli\n",v1[i]);
	}
    return 0;
}

