#include<iostream>
using namespace std;
int main(){
	int a[101],c[101],ans=0,l,m,z,x;
	cin>>l>>m;
	
	for(z=0;z<m;z++){
		cin>>a[z];
		cin>>c[z];
	}
	int b[10001]={0};
	for(z=0;z<m;z++){
		for(x=a[z]-1;x<c[z];x++){
			b[x]=1;
		}
	}
	
	
	
	
	for(z=0;z<l;z++){
		if(b[z]==0){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}