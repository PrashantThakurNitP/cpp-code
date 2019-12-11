#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
   
    for(int i=0;i<t;i++)//test case
    {
        int n;
        cin>>n;
       // cout<<"n";
         int count3=0;
           vector<int>v1;
        for(int j=0;j<n;j++)//grid
        {
           //cout<<"j";
             // vector<int>v2;
            /* int num;
             cin>>num;
             int num1=num%pow(10,n/2);
             int num2=num/pow(10,n/2);*/
             int num  ;
             cin>>num;
              int count1=0;
              int count2=0;
             
             
            for(int k=0;k<n/2;k++)
           {
               int a=num%10;
               num=num/10;
             //  cin>>a;
             //  v1.push_back(a);
             if(a==1)
                count1++;
              //  cout<<"k";
               
           }
              
            for(int k=n/2;k<n;k++)
           {
               int a=num%10;
               num=num/10;
              // cin>>a;
              if(a==1)
              count2++;
               
           }
           count3+=count1-count2;
           v1.push_back(count1-count2);
            
         //count1= count(v1.begin(), v1.end(), 1);   
         //count2=count(v2.begin(), v2.end(), 1); 
        }//grid
        sort(v1.begin(),v1.end());
       // cout<<"sort";
        if(count3>0)
        {
          //  cout<<"if";
           // int des=0;
            for(int k=0;k<n;k++)
            {
                if(v1[k]<=count3/2&&(v1[k+1]>count3/2||k==n-1))
                {
                    //des=v1[k];
                    count3=count3-2*v1[k];
                    break;
                }
            }
              if(count3<0)
             count3=count3*-1;
            cout<<count3<<endl;
        }
       else if(count3<0)
        {
           // cout<<"else";
            //int des=0;
            for(int k=0;k<n;k++)
            {
                if(v1[k]<=count3*-1/2&&(v1[k+1]>count3*-1/2||k==n-1))
                {
                    //des=v1[k];
                    count3=count3+2*v1[k];
                   
                    break;
                }
            }
             if(count3<0)
             count3=count3*-1;
            cout<<count3<<endl;
        }
        else
        cout<<count3<<endl;
        
    }//test
    return 0;
}
