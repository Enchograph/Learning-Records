#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,xin,ans=0,z,y,x,range;
	cin>>n,xin;
	for(x=1;x<n+1;x++){
		range=(int)log10(n);
		/*if(int((x-int(x/10)*10)/1)==xin)ans++;
		for(y=1;y<range+1;y++){
			if(int(x-(int)(x/(10^(y+1)))*(10^(y+1))/(10^y))==xin){
				ans++;
			}
		}
		*/
		if(
			(int)((x-int(x/10)*10)/1)==xin
			){
				ans++;
			}
		for(y=1;y<range+1;y++){
			if(
			int((x-int(x/10^(y+1))*10^(y+1))/10^y)==xin
			){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}