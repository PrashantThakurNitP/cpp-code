//wrong answer as when decreasing temp will not decrease below k similarly for increasing
//hence chose max of k and a-k while decreasing
//and min of k and a+k while increasing
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
       vector<int>v2(0,0);
       cout<<"i= "<<i<<endl;
   //no of can n
   //ambient temp k
   //time to go home m
   // l r range of temperature
   int price =100000;
    //vector<int>v1;
    bool flag =0;
    //bool flag2=0;
    int temp;
   // cout<<"n = "<<n<<endl;
     for(int j=0;j<n;j++)
     {
       int a;//current temp
       int b;//price
      // vector<int>v1;
      // vector<int>v2;
       cout<<"j= "<<j<<endl;
       cout<<"hello";
       cin>>a;
       cout<<"again";
       cin>>b;
       cout<<" a and b "<<a<<" "<<b<<endl;
      // if(b<=price)
      // {
     // cout<<" current temp a= "<<a<<" price = "<<b<<"time to go home"<<m<<"otside temp"<<k<<endl;
//cout<<"price "<<b<<" and temp "<<a<<endl;
       	if(a-m>k+1 && a-m<=r && a-m>l)
       	{

           flag=1;
           price=b;
           temp=a-m;
           //v1.push_back(temp);
           v2.push_back(price);
           cout<<"if "<<endl;
       	}
       	else if(a+m<k-1 && a+m<=r && a+m>=l)
       	{
       		flag=1;
            price=b;
            temp=a+m;
           // v1.push_back(temp);
            v2.push_back(price);
             cout<<"else if  0"<<endl;
       	}
       	else if(a+m<=k+1 && a+m>=k-1 && a+m<=r && a+m>=l)
       	{
       		flag=1;
       		price=b;
       		temp=a;
       		// v1.push_back(temp);
       		 v2.push_back(price);
       		cout<<"else if 1 "<<endl;
       	}//inner else if
        else if(a-m<=k+1 && a-m>=k-1 && a-m<=r && a-m>=l)
        {
          flag=1;
          price=b;
          temp=a;
          // v1.push_back(temp);
           v2.push_back(price);
          cout<<"else if 2 "<<endl;
        }//inner else if
       	else
       	{
       	//cout<<" inside else price "<<b<<"temperature "<<a<<endl;
       	v2.push_back(-1);
       	 cout<<"else "<<endl;
       	}
        
       }//outer if
       
     cout<<" hello insidde if";
      //for loop
     // for(int u=0;u<v2.size();u++)
    //  {
        //  cout<<"inside for price "<<v2[u]<<" u "<<u<<endl;
     /* if(flag==1 && temp<=r && temp>=l)*/
     //if( v1[u]<=r && v1[u]>=l)
      // {
       	 // cout<<" price = "<<v2[u]<<endl;
       	  //cout<<"temp = "<<v1[u]<<endl;
       //}
       //else
       //cout<<"-1 not found "<<endl;
      // }
      //v2.sort(v2.begin(),v2.end());
      cout<<"outside if";
      if(v2.size()>0)
       cout << "\nMin Element = "
         << *min_element(v2.begin(), v2.end());
         else
          cout<<" no fount -1";
   }//for for t
}//main ends
//n m k l r
