#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n,0);
    for(int i=0;i<n;i++)
         cin>>v[i];
    vector<long long>v2;//prefix sum
    v2=v;
    for(int i=n-2;i>=0;i--)
     v2[i]=v2[i]+v2[i+1];
     
     long long ct;
     long long ct1;
     long long sum=0;
     long long sum1=0;//sum
     long long sum2=0;
     long long max=-99999999999999999;
     
     for(int i=0;i<n;i++)
     {
         ct=n-i;
         sum1=v2[i];
         for(int j=1;j<n;j++)
         {
            int  k=j+1;
             if(j*(j+1)/2<=ct && k*(k+1)/2>ct)
             {
                 ct1=j*(j+1)/2;
                 break;
             }
             
         }
         if(i+ct1<n)
         sum2=v2[i+ct1];
         else
         sum2=0;
         sum=sum1-sum2;
         if(sum>max)
           max=sum;
     }
     cout<<max;
    
     
      
         
}
