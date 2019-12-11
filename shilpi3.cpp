#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	cout<<s1;
	cout<<s2;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	int flag=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
			s1[i]='"';
	}
	for(int i=0;i<s2.size();i++)
	{

		if(s2[i]!='a'&&s2[i]!='e'&&s2[i]!='i'&&s2[i]!='o'&&s2[i]!='u')
			s2[i]='*';
	}
	for(int i=0;i<s3.size();i++)
	{
		if(s3[i]<='z'&&s3[i]>='a')
			s3[i]=s3[i]-32;
}
cout<<"output are"<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
}