#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,logans,left,right;
	long long s[100010];
	char num[100010];
	cin>>t;
	for(int z=0;z<t;z++)
		cin>>s[z]>>num[z];
	for(int z=0;z<t;z++){
		if(num[z]=='<'){
			logans=log10(s[z]);
			left=s[z]/pow(10,logans);
			right=s[z]-left*pow(10,logans);
			if(left<right){
				cout<<left<<"<";
				for(;logans-log10(right)>1;logans--)
				cout<<"0";
				cout<<right<<endl;
			}
			else cout<<"-1"<<endl;
		}
		if(num[z]=='>'){
			left=s[z]/10;
			right=s[z]-left*10;
			if(left>right){
				cout<<left<<">"<<right<<endl;
			}else
				cout<<"-1"<<endl;
		}
	}
	
	
	
	
	return 0;
}