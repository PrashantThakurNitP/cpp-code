#include <iostream>
using namespace std;
int  fibonacci(int *a,int n)
{
   if(a)
    if(n==0)
     return 0;
     else if(n==1)
       return 1;
    
    
      
    a[n]= fibonacci(a,n-1)+fibonacci(a,n-2);
    
    
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    
   
   a[0]=0;
   a[1]=1;
   int p=fibonacci(a,n);
   for(int i=0;i<n+1;i++)
     cout<<a[i]<<" ";
   
}

