#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,nin,nmore,x,y;
	here:
	cin>>nin;
	//nin++;
	n=(int)(0.5*(pow((1+8*nin),0.5)-1));
	
	nmore=nin-(0.5*(n+1)*n);
	if(nmore==0){
		if(n%2==0){
			x=2;
			y=n-1;
		}
		if(n%2==1){
			y=1;
			x=n;
		}
	}else{
		if(n%2==0){
			x=2+n-nmore;
			y=nmore;
		}
		if(n%2!=0){
			y=2+n-nmore;
			x=nmore;
		}
	}
	cout<<x<<"/"<<y<<endl;
	cout<<nmore<<" "<<n<<endl;
	goto here;
	return 0;
}