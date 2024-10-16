#include<iostream>
using namespace std;
int n,k,ans=0,a[30]={0},cache=0;

bool isPrime(int prime){
	//cout<<"prime:"<<cache<<endl;
	for(int z=2;z*z<prime+1;z++){
		if(prime%z==0)
			return false;
	}
	return true;
}
void xsum(int begin,int xsum_k){
	//cout<<begin+1<<" "<<xsum_k<<endl;
	if(xsum_k==0){
		if(isPrime(cache))ans++;
		//cout<<"the end:"<<cache<<endl;
		return;
	}
	for(int z=begin;z<n;z++){
		cache+=a[z];
		xsum(z+1,xsum_k-1);
		cache-=a[z];
	}
	return;
	
}

int main(){
	cin>>n>>k;
	for(int z=0;z<n;z++){
		cin>>a[z];
	}
	//for(int z=0;z<n;z++)
		xsum(0,k);
	cout<<ans;
	return 0;
}
