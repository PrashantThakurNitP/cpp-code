#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int x=max(a,b);
    int y=min(a,b);
    int c;
    if(x==y)
     return x;
     else if(y==0)
      return x;
     else if(y==1)
       return 1;
       else
         c=gcd(y,x%y);
        return c; 
}
int f_sum(vector<int>&v,int a,int b)
{
    //int temp=1;
    if(a==b)
       return v[a];
     else if(a-b==1)
       return gcd(v[a],v[b]);
      else
      { int p=gcd(v[a],v[a+1]);
         for(int i=a+2;i<=b;i++)
           p=gcd(p,v[i]);
           return p;
      }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1(n+1);
    for(int i=1;i<=n;i++)
        cin>>v1[i];
        
     /*   for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=n;j++)
          {
             ar[i][j]=gcd(v1[i],v1[j]);
          }
        }*/
    
     
      
     for(int u=0;u<m;u++)
     {
      int a,b;
       int sum=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
          for(int j=i;j<=b;j++)
          {
            //sum=sum+gcd(v1[i],v1[j]);
            sum=sum+f_sum(v1,i,j);
          }
        }
        cout<<sum<<endl;
     }
}
