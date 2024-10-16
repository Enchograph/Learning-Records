#include<iostream>
using namespace std;
int main(){
	int z,time[7],a,b,longest=0,lday=-1;
	for(z=0;z<7;z++){
		cin>>a>>b;
		time[z]=a+b;
		if(time[z]>longest){
			longest=time[z];
			if(longest>8){
				lday=z;
			}
		}
	}
	cout<<lday+1;
	return 0;
}