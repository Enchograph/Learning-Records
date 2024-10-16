#include <iostream>
#include<algorithm>
using namespace std;
int main(){
	int z,a[3],b[3],c[3],n;
	cin>>n;
	for(z=0;z<3;z++){
		cin>>a[z]>>b[z];
		if(n%a[z]!=0)
		c[z]=((int)(n/a[z])+1)*b[z];
		if(n%a[z]==0)
		c[z]=((int)(n/a[z]))*b[z];
	}
	sort(c,c+3);
	cout<<c[0];
	return 0;
}
	
