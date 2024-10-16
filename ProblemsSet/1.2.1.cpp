#include<iostream>
using namespace std;
int main(){
	int a[10],ans=0,h;
	for(int z=0;z<10;z++){
		cin>>a[z];
	}
	cin>>h;
	for(int z=0;z<10;z++){
		if(!(a[z]>(h+30))){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}