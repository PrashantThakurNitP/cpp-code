
#include <bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;
int modInverse(int a, int m) 
{ 
    a = a%m; 
    for (long long x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
} 
int countFreq(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 

int main() {
    int n;
    cin>>n;
    vector<string>s1(n);
    for(int i=0;i<n;i++)
      cin>>s1[i];
      //for(int i=0;i<n;i++)
     // cout<<s1[i]<<endl;
     long long count1=0;
     for(int l1=0;l1<s1.size();l1++)//select string
     {
     for(int i=0;i<s1[l1].size();i++)//select staring address
     {
       //cout<<"i = " <<i<<endl;//comment
         
         for(int j=i;j<s1[l1].size();j++)
         {
             bool flag=1;
            string r = s1[l1].substr(i, j+1-i); 
            //cout<<r<<endl;//comment
            for(int k=0;k<r.size();k++)
            {
              //cout<<"k is "<<k<<endl;
               if(r[k]!=r[r.size()-k-1])
               {
                 flag=0;
                 //cout<<r<<" not found"<<endl;//not found cooment 
                 break;
               }
            }
            //cout<<"flag is "<<flag<<endl;
            if(flag)//palindrome
            {
             // cout<<"l1 = "<<l1<<" flag = "<<flag<<endl;
               for(int u=l1+1;u<n;u++)
               {
                 
                 if(u==l1)
                 continue;
                //  if (s1[u].find(r) != std::string::npos) {
                  // count+=1;
                  // count1+=count(s1[u].begin(), s1[u].end(), r);
                   //cout<<r<<" is found  and count"<<count<<endl;
                   count1+=countFreq(r, s1[u]); 
                 
             //  }
              
}
               
            }
            //cout<<r<<endl;
         }//j loop
     }//i loop
     }
    // cout<<count1;
     long long count2=1;
     for(int i=0;i<s1.size();i++)
     {
         int len1=s1[i].size();
         count2=count2*(len1)*(len1+1)/2;
         // cout<<count2;
     }
   //  cout<<count2;
   long long p1=modInverse(count2,1000000007);
     cout<<(long long)p1*count1%1000000007;
      
      

}


