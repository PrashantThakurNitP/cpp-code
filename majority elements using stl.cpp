#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int get_majority_element(vector<int> &v,int beg,int end)
{

  int mid=beg+(end-beg)/2;
  int mid_element=v[mid];
  vector<int>::iterator lower,upper;
  lower=lower_bound(v.begin(),v.end(),mid_element);
  upper=upper_bound(v.begin(),v.end(),mid_element);
  cout<<lower<<" "<<upper<<endl;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  sort(a.begin(), a.end());
 // std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
  cout<<get_majority_element(a, 0, a.size()-1);
}
