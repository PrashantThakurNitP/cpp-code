#include <iostream>
#include <vector>
using namespace std;
using std::vector;

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  //write your code here
  int count=0;
/*  for(int i=0;i<ave;i++)
  {
    for(int j=ave;j<right;j++)
    {
       if(a[i]>a[j])
        {
            b.push_back(a[j]);
            count++;
        }
        else
        {
            b.push_back(a[i]);
        }
        
    }
  }*/
  size_t k=0;
  for(size_t i=left,j=ave;i<ave||j<right;)
  {
      if(a[i]<=a[j]||(j==right&&i<ave))
      {
          b[k]=a[i];
          k++;
          i++;
         
      }
      else if(a[i]>a[j]||(i==ave&&j<right))
      {
          
          b[k]=a[j];
          k++;
          j++;
          count++;
         
          
      }
     
  }
  for(size_t i=0;i<k;i++)
    a[left+i]=b[i];
  
  
  number_of_inversions=count;
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
  std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
}

