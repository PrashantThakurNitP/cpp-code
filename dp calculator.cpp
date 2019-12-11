#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//using std::vector;

vector<int> optimal_sequence(int n) {
  std::vector<int> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}
vector<int> optimal_sequence_dp(int n) {
  vector<int> sequence;
  vector<int>op(n+1,0);
  for(int i=n-1;i>=1;i--)
  {   int min1=9999; 
     cout<<" i = "<<i<<endl;
      for(int j=n;j>i;j--)
      {
        cout<<" j = "<<j<<endl;
        int temp1=9999,temp2=9999,temp3=9999,temp=9999;
        if(i==j-1)
          temp1=op[j]+1;
         if(i==j/2)
          temp2=op[j]+1;
         if(i==j/3)
          temp3=op[j]+1;
        cout<<"temp1 temp2 temp3"<<temp1<<" "<<temp2<<" "<<temp3<<endl;
        temp=min(temp1,temp2);
        temp=min(temp,temp3);
        cout<<" temp is "<<temp<<endl;

         if(min1>temp)
        min1=temp;

      }
      op[i]=min1;
     

  }
  
  reverse(op.begin(), op.end());
  return op;
}


int main() {
  int n;
  std::cin >> n;
  vector<int> sequence = optimal_sequence_dp(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
