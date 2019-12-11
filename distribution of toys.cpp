#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
   
      cin>>n;
      if(n<=3)
      {
        cout<<"0"<<endl;
        continue;
       }
      int m=n-3;
      int r1=(m+1)*(m+2)/2;
      int count;
      if(m%3==0)
      {
        int k=m/3;
         count=3*(k/2)+1;
        
      }
       else if(m%2==0)
      {
        int k=m/3;
        count=3*((k/2)+1);
        
      }
       else if(m%2!=0)
      {
        int k=m/3;
         count=3*((k+1)/2);
        
      }
      cout<<r1-count<<endl;
   }
}
