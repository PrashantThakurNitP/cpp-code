#include<iostream>
#include<string>
using namespace std;
int index;
int E( char* s1)
{
   int a;
   if(s1[index]=='e')
      return 1;
    else if(s1[index]=='i')
       {
          index++;
          a=E(s1);
          return a;
          
       }
       else if(s1[index]=='\0')
       return 1;
      else 
      {
      cout<<s1[index];
    cout<<"error";
        return 0;
        }
         

}
int main()
{
char s1[10];
cout<<"Enter the string";
index++;
//for(int i=0;i!='\0';i++)
 //  cin>>s1[i];
 cin>>s1;
for(int i=0;s1[i]!='\0';i++)
cout<<s1[i];
cout<<endl;
if(s1[0]=='+')
{

  int a=E(s1);
  if(a==1)
    cout<<"accepted";
    else if (a==0)
    cout<<"not accepted";
    else
    cout<<"error";
}
else
   cout<<"not valid";
}
