#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,q;
cin>>n>>m>>q;
char a[n][m];
for(int i=0;i<n;i++)
{
   string s1;
 
   cin>>s1;
   for(int j=0;j<m;j++)
   a[i][j]=s1[j];
}


for(int k=0;k<q;k++)
{ 

   
   int b1;
   cin>>b1;
   
      if(b1==2)
      
      {     
             int count=0;
              for(int i=0;i<n;i++)
                {
                   for(int j=0;j<m;j++)
                     if(a[i][j]=='1')
                       count+=1;
                   
                }
                cout<<count<<endl;
                 
      }
      else if(b1==1)
      {
      int a1,a2;
        cin>>a1>>a2;
       
            
            
              if(a1 > 0)
             {
                 
                for(int i=0;i<n;i++)
                  {
                    for(int j=0;j<m-a1;j++)
                       a[i][j]=a[i][j+a1];
                       for(int j=m-a1;j<m;j++)
                       a[i][j]='0';
                  }
                     
              }
             
             
              else if(a1 < 0)
             {
                 
                for(int i=0;i<n;i++)
                  {
                    for(int j=0;j<m+a1;j++)
                       a[i][j-a1]=a[i][j];
                      for(int j=0;j<-1*a1;j++)
                       a[i][j]='0';
                  }
             }
            
             
              if(a2>0)
             {
                 
                for(int j=0;j<m;j++)
                  {
                    for(int i=0;i<n-a2;i++)
                       a[i][j]=a[i+a2][j];
                       for(int i=n-a2;i<n;i++)
                       a[i][j]='0';
                  }
             }
              else if(a2<0)
             {
                
                for(int j=0;j<m;j++)
                  {
                    for(int i=0;i<n+a2;i++)
                       a[i-a2][j]=a[i][j];
                      for(int i=0;i<-1*a2;i++)
                       a[i][j]='0';
                  }
             }
             
      }
}

}