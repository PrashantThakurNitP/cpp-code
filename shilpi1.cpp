#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cout<<s1;
	cout<<s2;
	getline(cin,s1);
	getline(cin,s2);
	int flag=0;
	for(int i=0;i<s2.size();i++)
	{
		string s3 = s1.substr(0, s1.size()-1);
		string s4=s1.substr(s1.size()-1,1);
		cout<<"s4 is "<<s4;
		cout<<"s3 is "<<s3<<endl;
		s4.append(s3);
		s1=s4;
		if(s1==s2)
	    {
		flag=1;
			break;
	   }		
	}
	if (flag)
		cout<<"possible";
	else 
		cout<<"not possible";
}