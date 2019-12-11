#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;
   
   for(int k=0;k<t;k++)
   {
    vector<int>v;
       int n,q;
       cin>>n>>q;
        for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        v.push_back(a);
        
      }
    sort(v.begin(),v.end());
    for(int j=0;j<q;j++)
    {
        int x;
        cin>>x;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=x)
             break;
             else
             {
                 count++;
                 x=2*(x-v[i]);
             }
        }
     
     cout<<count<<endl;   
    }
   }
    return 0;
}
