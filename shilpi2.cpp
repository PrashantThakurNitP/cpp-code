#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int flag=0;
	while(5)  //outer  loop without any condition
	{


		int sum=0;
		int temp=0;
			if(a!=1&&a/10==0)
		{
			//cout<<"become 1 digit no hence not possible"<<endl;
			break;//this no cannot become happy no

		}
		while(a>=1)
		{
   	      temp=a%10;
   	      sum=sum+temp*temp;
      	  a=a/10;    
		}   //finding sum square of digits
               // cout<<"in middle stage sum is  "<<sum<<endl;
		
		if(sum==1)//happy number proved and we break out of the loop
		{
			flag=1;
			break;
		}
		
	

		a=sum;//again following the same operation on sum ie result obtained in 
		//previous step become a in next step

  }
  if(flag)
  	cout<<"happy no";
  else 
  	cout<<"not happy no";

}