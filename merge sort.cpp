#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count1 = 0;
void merge(vector<int> &v,int beg, int mid, int end)
{
	cout<<"checking beg = "<<beg<<" mid = "<<mid<<"end = "<<end<<endl;
	for(int i=beg;i<=end;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	vector<int>t;
	//int k=0;
	int i,j;
	//if(j<=end && i<=mid)
	for(i=beg,j=mid+1;j<=end && i<=mid;)
	{
		//cout<<"enter for loop"<<endl;
		if (i>mid && j>end)
			
			{
				cout<<" break ";
				break;
			}
		
		else if(v[i]<=v[j])
		{
			//cout<<"pushing 1 "<<v[i];
			t.push_back(v[i]);
			i++;
			//k++;

		}
		else if(v[i]>v[j])
		{
			//cout<<"pushing 2 "<<v[j];
			t.push_back(v[j]);
			cout<<"swaped is 1 "<<v[i]<<" "<<v[j]endl;
			//k++;
			count1+=(j-i);	
			j++;
			//count1++;
			
		}
		//cout<<"end for loop "<<endl;
		
	}
	if(i>mid && j<=end)
		while(j<=end)
		{
			//cout<<"pushing 3 "<<v[j];
			t.push_back(v[j]);
			//k++;
			j++;
			//count1++;
		}
	else if(i<=mid && j>end)
		while(i<=end)
		{
			//cout<<"pushing 4 "<<v[i];
			t.push_back(v[i]);
			cout<<"swaped is 2 "<<v[i]<<endl;
			//k++;
		
			count1+=(end-i);
			i++;


		}
	
	//cout<<"copying "<<endl;

	for(int i=0;i<=end-beg;i++)
	{

		cout<<t[i]<<"\t";
		//v.insert(i,t[i]);
		v[beg+i]=t[i];
		
	}
  
}
void  merge_sort(vector<int> &a,int beg,int end)

{
	//cout<<"inside merge sort checking"<<endl;
	for(int i=beg;i<=end;i++)
	{

		cout<<a[i]<<"\t";
		
	}
	if(beg<end)
	{
		int mid=beg+(end-beg)/2;

		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
	else
		return;
	
   
}
int main()

{
	int n;
	cin>>n;
	vector<int> a(n);
	//vector<int> b(n);
	//cout<<"enter elements of vector"<<endl;
	for(int i=0;i<a.size();i++)
		cin>>a[i];
	merge_sort(a,0,a.size()-1);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<"no of swap is"<<count1;

}