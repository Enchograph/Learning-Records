#include<iostream>
using namespace std;
int main(){
	int z, a[12],r=0,now=0,ans,mon=114514;
	for(z=0;z<12;z++){
		now+=300;
		cin>>a[z];
		now-=a[z];
		if(now<0)mon=-(z+1);
		if(int(now/100)>0){
			r+=int(now/100)*100;
			now-=int(now/100)*100;
		}
		
	}
	if(mon>0){
		ans=1.2*r+now;
	}else{
		ans=mon;
	}
	cout<<ans;
	return 0;
}