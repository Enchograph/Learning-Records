#include<iostream>
using namespace std;
int a[1000]={1};
int v(int n){
	int res=1;
	if(a[n-1]!=0)return a[n-1];
	else{
		for(int i=(n-n%2)/2;i;i--){
			res+=v(i);
		}
		a[n-1]=res;
		return res;
	}
}
int main(){
	int n;
	
	cin>>n;
	cout<<v(n);
	
	return 0;
}