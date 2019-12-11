#include <iostream>
using namespace std;

int main()
{
    	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		
		int n,m;
		cin>>n>>m;
		int a[n+1];
		int b[m+1];
	//	vector<int>v1(n,-1);
		int v1[n+1];
		for(int i=1;i<=n;i++)
		   v1[i]=-1;
		
		for(int i=1;i<=n;i++)
		      cin>>a[i];
			//a.push_back(temp);
		
		for(int j=1;j<=m;j++)
		    cin>>b[j];
			//b.push_back(temp);
	

		for(int j=1;j<=m;j++)//day
		{
		    int d;
			for(int i=1;d<=n;i++)//health
			{
			     d=i*j;
				if((a[d]<=b[j])&&(v1[i]==-1))
				{
				  
			
			     
			     	v1[i]=j;
			    
				}
				else 
				  continue;
			}
		
		}
		for(int i=1;i<=n;i++)
		  cout<<v1[i]<<endl;
	}
    return 0;
}

