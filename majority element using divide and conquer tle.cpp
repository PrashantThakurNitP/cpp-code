#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using std::vector;

/*int get_majority_element(vector<int> &a, int left, int right) {
 if (left == right) return -1;
  if (left + 1 == right) return a[left];

  //write your code here
  int mid=left+(right-left)/2;
  int mid_element=a[mid];




}*/
int get_index_r(vector<int> &a, int left, int right ,int value );
int get_index_l(vector<int> &a, int left, int right ,int value );
int get_majority_element(vector<int> &a, int left, int right)
{
   int mid=left+(right-left)/2;
  int mid_element=a[mid];
  
  //get_majority_element(a,left,mid);
  //get_majority_element(a,mid+1,right);
  int i,j;
   if(a[0]==mid_element)
       i=0;
   else if(a[mid-1]!=mid_element)
       i=mid;
  else if(a[mid-1]==mid_element)
       i=get_index_l(a,left,mid,mid_element);

 if(a[right]==mid_element)
     j= right;
 else if(a[mid+1]!=mid_element)
     j= mid;
  else if(a[mid+1]==mid_element)
      j=get_index_r(a,mid+1,right,mid_element);
  
  
    if(j+1-i>a.size()/2)
    return 1;
  else
    return 0;

  
  }

int get_index_l(vector<int> &a, int left, int right ,int value )
{
  //cout<<" inside left \n"<<endl;
  int mid=left+(right-left)/2;
   int mid_element=a[mid];
   int p;
   if(a[mid]==value && a[mid-1]!=value)
   {
     return mid;
   }
   else if(a[mid]==value)
   {

    //int mid=left+(right-left)/2;;
      p=get_index_l(a,left,mid-1,value);

   }
    else if(a[mid]!=value && a[mid+1]==value)
   {
   // p=get_index_r(a,mid,right,value);
    return mid+1;
   }
   else if(a[mid]!=value)
   {
    p=get_index_r(a,mid,right,value);
   }
   return p;
   
}
int get_index_r(vector<int> &a, int left, int right ,int value )
{
  //cout<<" inside right \n"<<endl;
  int mid=left+(right-left)/2;
   int mid_element=a[mid];
   int p;
   //if(a[i_mid+1]!=value)
    //return mid;
   if(a[mid]==value && a[mid+1]!=value)
   {
     return mid;
   }
   else if(a[mid]==value)
   {

    //int mid=left+(right-left)/2;
      p=get_index_r(a,mid,right,value);

   }
    else if(a[mid]!=value && a[mid-1]==value)
   {
   // p=get_index_r(a,mid,right,value);
    return mid-1;
   }
   else if(a[mid]!=value)
   {
    p=get_index_l(a,left,mid-1,value);
   }
   return p;
   
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
