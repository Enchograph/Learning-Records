#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int ans,in,z,n,a[11],bol=0;
	cin>>in;
	if(in<0){
		in=-in;
		cout<<"-";
	}
	n=(int)log10(in);
	for(z=0;z<n;z++){
		a[z]=(int)(in/10^(n-z));
		in=in-(int)(in/10^(n-z))*10^(n-z);
	}
	for(z=0;z<n;z++){
		if(a[n-1-z]!=0){
			bol=1;
			cout<<a[n-1-z];
		}else{
			if(bol==1){
				cout<<a[n-1-z];
			}
		}
	}
	return 0;
}