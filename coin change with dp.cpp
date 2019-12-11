#include <iostream>
#include<vector>
using namespace std;

int get_change(int m) {
  //write your code here
  return m / 4;
}

int get_change_d(int m) {
  //write your code here
 int coin[3]={1,3,4};
 vector<int>money;//no of coin

 for(int i=0;i<=m;i++)
 money.push_back(0);

  for(int j=1;j<=m;j++)//j is money to change
  {
    
    cout<<"j = "<<j<<endl;
    int flag=1;
    int num=9999;
     int no=99999;
    for( int k=0;k<j;k++)
    {
      cout<<"k = "<<k<<endl;
      
      int temp=9999;
        
      //if(!flag)
        //break;
      
             for(int i=2;i>=0 ;i--)//coin[i] contain coin denomination
             {
              if((j-k)/coin[i]<1)
        continue;

              cout<<"i= "<<i<<endl;
              if((j-k)%coin[i]!=0)
            continue;
              //if(j>money[k])
              temp=(j-k)/coin[i];
              if(temp==0)
                {
                  // flag=0;
                  //break;
                  continue;
                }
              if(temp+money[k]<=no)
              {
                no=temp+money[k];
                cout<<"temp = "<<temp;
                cout<<"money = "<<money[k];
                cout<<"no = "<<no<<endl;

              }
              
             }
             if(no<num)
             num=no;
    }
    money[j]=num;
    cout<<"j = "<<j<<" money[i] = "<<money[j]<<endl;

  }
  return money[m];

}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change_d(m) << '\n';
}
