#include<iostream>
#include<cmath>
using namespace std;
int numOfSel(int nn,int nk){
	if(nk==0)return 0;
	if(nn%2==1)return -1;
	int res,nlog,newnn;
	if(nn%4==0){
			nlog=log(nn)/log(2);
			if(nlog>nk){
				//an k zou
				newnn=nn/pow(2,(nk-1));
				return numOfSel(newnn,1);
			}
			if(nlog<=nk){
				//an nlog zou
				newnn=nn/pow(2,(nlog-1));
				return numOfSel(newnn,1+nk-nlog);
			
			}
		}
	if(nn%4!=0)	{
		res=int (nn/(pow(2,nk)));
		res+=numOfSel(nn-pow(2,nk)*res,nk-1);
		return res;
	}
}
int main(){
	int t,n[1010],k[1010];
	cin>>t;
	for(int z=0;z<t;z++){
		cin>>n[z]>>k[z];
	}
	for(int z=0;z<t;z++){
		cout<<numOfSel(n[z],k[z])<<endl;
	}
	return 0;
}