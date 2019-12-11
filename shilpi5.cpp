#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter no of elements in series"<<endl;
	cin>>n;
	//int flag=0;
	long long a[n+1];
	a[0]=1;
	a[1]=1;
	a[2]=2;
	   int odd=1;
		int even=2;
	for(int i=3;i<=n;i++)
	{
		
		if(i%2!=0)
		{
			odd=odd*3;
			a[i]=odd;

		}
		if(i%2==0)
		{
			even=even*2;
			a[i]=even;

		}
		

	}
	cout<<"series is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
  

}