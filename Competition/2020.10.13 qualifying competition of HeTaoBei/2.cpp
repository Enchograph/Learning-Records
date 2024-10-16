#include<iostream>
using namespace std;
int main(){
	int T,cache;
	char a[1010];
	cin>>T;
	for(int z=0;z<T;z++){
		cin>>cache;
		if(cache%3==0)a[z]='A';
		if(cache%3==1)a[z]='B';
		if(cache%3==2)a[z]='C';
	}
	for(int z=0;z<T;z++){
		cout<<a[z]<<endl;
	}
	return 0;
}