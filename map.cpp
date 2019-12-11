#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[20];
	map<int,int> d;
	for (int i=0;i<20;i++){
	cin>>a[i];
	if(d[a[i]]){
		d[a[i]]+=1;
	}
	else{
		d[a[i]]=1;
	}
	}
	for(auto x:d){
	if(x.second>2){
	cout<<x.first<<':'<<x.second<<endl;
	}
}
typedef std::function <bool(pair<int ,int> ,pair<int,int> )> Comparator;
Comparator my_compare=[](pair<int,int> p1, pair<int ,int> p2)
{
	return p1.second>p2.second;
};
	sort(d.begin(),d.end(),my_compare);
	
	
}