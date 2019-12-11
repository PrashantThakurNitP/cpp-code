#include<bits/stdc++.h>

using namespace std;
int main()
{
long long n,m,q;
//cin>>n>>m>>q;
scanf("%lli%lli%lli".&n,&m,&q);
char a[n][m];
for(long long i=0;i<n;i++)
{
   string s1;
   //getline(cin,s1);
   //cin>>s1;
   scanf("%s",s1);
   for(long long j=0;j<m;j++)
   a[i][j]=s1[j];
}

bool flag_xy=0;
//bool flag_y=0;
long long x_pshift=0;
long long y_pshift=0;
long long x_nshift=0;
long long y_nshift=0;
for(long long k=0;k<q;k++)
{ 
  if(x_pshift>=m||x_nshift<=-m||y_pshift>=n||y_nshift<=-n)
    flag_xy=1;
	
	int b1;
	//cin>>b1;
   scanf("%d",&b1);
   
   	if(b1==2)
   	
   	{     
   	      if(flag_xy)
   	      {
   	          //cout<<"0"<<endl;
               printf("0\n");
   	          continue;
   	      }
   	       long long count=0;
   	        for(long long i=0;i<n;i++)
   	          {
   	             for(long long j=0;j<m;j++)
   	               if(a[i][j]=='1')
   	                 count+=1;
   	             
   	          }
   	         // cout<<count<<endl;
                printf("%lli\n",&count);
   	         
   	}
   	else if(b1==1)
   	{
   	long long a1,a2;
   	 // cin>>a1>>a2;
      scanf("%lli%lli",&a1,&a1);
   	   if(flag_xy)
   	      {
   	         
   	          continue;
   	      }
   	  
   	        if(a1 > 0)
   	       {
   	           x_pshift+=a1;
   	          for(long long i=0;i<n;i++)
   	            {
   	              for(long long j=0;j<m-a1;j++)
   	                 a[i][j]=a[i][j+a1];
   	                 if(m-a1>=0)
   	                 for(long long j=m-a1;j<m;j++)
   	                 a[i][j]='0';
   	                 else
   	                     for(long long j=0;j<m;j++)
   	                        a[i][j]='0';
   	                 
   	            }
   	               
   	        }
   	       
   	       
   	        else if(a1 < 0)
   	       {
   	           x_nshift+=a1;
   	          for(long long i=0;i<n;i++)
   	            {
   	              for(long long j=0;j<m+a1;j++)
   	                 a[i][j-a1]=a[i][j];
   	                 if(-1*a1<m)
   	                for(long long j=0;j<-1*a1;j++)
   	                 a[i][j]='0';
   	                 else
   	                   for(long long j=0;j<m;j++)
   	                 a[i][j]='0';
   	                 
   	            }
   	       }
   	    
   	       
   	         if(a2>0)
   	       {
   	           y_pshift+=a2;
   	          for(long long j=0;j<m;j++)
   	            {
   	              for(long long i=0;i<n-a2;i++)
   	                 a[i][j]=a[i+a2][j];
   	                 if(n-a2>=0)
   	                 for(long long i=n-a2;i<n;i++)
   	                 a[i][j]='0';
   	                 else
   	                      for(long long i=0;i<n;i++)
   	                        a[i][j]='0';
   	                   
   	            }
   	       }
   	        else if(a2<0)
   	       {
   	          y_nshift+=a2;
   	          for(long long j=0;j<m;j++)
   	            {
   	              for(long long i=0;i<n+a2;i++)
   	                 a[i-a2][j]=a[i][j];
   	                 if(-1*a2<n)
   	                for(long long i=0;i<-1*a2;i++)
   	                 a[i][j]='0';
   	                 else
   	                    for(long long i=0;i<n;i++)
   	                 a[i][j]='0';
   	                   
   	            }
   	       }
   	     
   	}
}

}

