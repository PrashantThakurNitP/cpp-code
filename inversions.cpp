#include <iostream>
#include <vector>
using namespace std;
using std::vector;

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left ) 
    {
       cout<<"element involved "<<a[right]<<a[left];
      return number_of_inversions;
     
    }
  
   if(right==left+1)
  {
    cout<<"inside fn right == left+1 element involved "<<a[right]<<a[left]<<endl;
    if(a[right]<a[left])
    {
      long long temp=a[right];
      a[right]=a[left];
      a[left]=temp;
      return 1;
       cout<<" inversion1 element involved "<<a[right]<<a[left];
    }
  }
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave+1, right);
 
  //write your code here
 // int count=0;
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
  size_t k=left,i,j;
  int count=0;
  for( i=left,j=ave+1;i<=ave&&j<=right;)
  {
    cout<<" for loop element involved "<<a[i]<<a[j]<<endl;
    /*  if(j==right&&i<ave)
      {
        b[k]=a[i];
        k++;
        i++;
        count++;
         cout<<" inversion2 element inside for loop "<<a[i]<<a[j]<<endl;
      }
      else if(i==ave&&j<right)
      {
        b[k]=a[j];
        k++;
        j++;
      }*/
       if(a[i]<=a[j])
      {
          b[k]=a[i];
          k++;
          i++;
         
      }
      else if(a[i]>a[j])
      {
          
          b[k]=a[j];
          k++;
          j++;
          count++;
          cout<<" inversion2 element inside for loop "<<a[i]<<a[j]<<endl;
         
          
      }
     
     
     cout<<"k is "<<k<<endl;
  }
  if(i==ave && j<right)
  {
    while(j<=right)
    {
       b[k]=a[j];
        k++;
        j++;
    }
  }
   if(j==right && i<=ave)
  {
    while(i<=ave)
    {
      
        b[k]=a[i];
        k++;
        i++;
        count++;
         //cout<<" inversion2 element inside for loop "<<a[i]<<a[j]<<endl;
    }
  }
  //cout<<"k is outside loop is "<<k<<endl;
  for(size_t i=left;i<right;i++)
    a[i]=b[i];
 // cout<<" k outside assignment is "<<k<<endl;
  
  
  number_of_inversions+=count;
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
  cout<<"before fn call"<<endl;
  cout << get_number_of_inversions(a, b, 0, a.size()-1) << '\n';
  cout<<"after function call"<<endl;
  return 0;
}
