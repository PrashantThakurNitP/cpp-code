#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
   int n,m,k,l,r;
   cin>>n>>m>>k>>l>>r;
   // vector<int>v1;
       vector<int>v2;
     
   int price =1000000000;
    
   bool flag = 0;
   
     for(int j=0;j<n;j++)
     {
       int a;
       int b;
       cin>>a;
    
       cin>>b;
     
       	if(a>k &&  max(a-m,k)<=r &&  max(a-m,k)>=l)
       	{
   // max(a-m,k)
           //
           //if(b)
           if(b<price)
           price=b;
           flag=1;
          // temp=a-m;
          
          // v2.push_back(price);
          //cout<<"if";
       	}
       	else if(a==k && a<=r && a>=l)
       	{
       	     if(b<price)
            price=b;
            //temp=a+m;
            flag=1;
             //cout<<"if";
       	}
       	else if(a<k &&  min(a+m,k)<=r &&  min(a+m,k)>=l)
       	{
       	    if(b<price)
            price=b;
            //temp=a+m;
            flag=1;
           // v1.push_back(temp);
           // v2.push_back(price);
            // cout<<"else if  0"<<endl;
       	}
       
     //   cout<<"flag price "<<flag<<" "<<price<<endl;
       }//outer if
       
    
      cout<<endl;
     // if(v2.size()>0)
      // cout<< *min_element(v2.begin(), v2.end());
      if(flag)
      cout<<price;
         else
          cout<<"-1";
   }//for for t
}//main ends
//n m k l r
