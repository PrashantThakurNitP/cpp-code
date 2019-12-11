#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	//cin>>t;
	scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		cout<<"k= "<<k<<endl;
		int n,m;
		//cin>>n>>m;
		scanf("%d%d",&n,&m);
		vector<int>a;
		vector<int> b;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		/*{
			//int temp;
			//cin>>temp;
			//a.push_back(temp);
		}*/
		for(int j=0;j<m;j++)
			scanf("%d",&b[i]);
		/*{
			int temp;
			cin>>temp;
			b.push_back(temp);
		}*/

		for(int j=0;j<m;j++)
		{
			//cout<<" j = "<<j<<endl;
			bool flag=0;
			for(int i=j;i<n;i+=(j+1))
			{
				cout<<" i = "<<i<<endl;
				//if((j+1)%(i+1)==0)
				if(a[i]<b[j])
				{
					flag=1;
					cout<<j+1<<"day of unfit"<<endl;
					break;
				}
			}
			if(flag==0)
				cout<<"-1 not possible"<<endl;
		}
	}
	return 0;
}