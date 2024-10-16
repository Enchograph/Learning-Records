#include<iostream>
using namespace std;
int main(){
	double s=0,k,n=0;
	cin>>k;
	do{
		n++;
		s+=(1/n);
	}while(s<k||s==k);
	cout<<n;
	return 0;
}