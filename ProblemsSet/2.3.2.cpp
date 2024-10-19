#include<iostream>
using namespace std;
int l, m, n;
int d[50010]={};
int theAns = -1;

void theFirstTry(int mInFuc, int nNow);
void toDelete(int a[], int n);

int main()
{
    cin >> l >> n >> m;
    for(int z=1;z<=n;z++){
        cin >> d[50010];
    }
    //theFunctionHere
    theFirstTry(m, n);
    // end
    cout << theAns;
    return 0;
}
//int judge(int theMaximumJumpDistanceBeingVerified){

//}
void theFirstTry(int mInFuc,int nNow){
    if(mInFuc==0)
        return;
    int mini=d[1], thePositionOfMini=1;
    for(int z=1;z<nNow;z++){
        if(d[z+1]-d[z]<mini){
            thePositionOfMini = 1;
            mini = d[z + 1] - d[z];
        }
    }
    if (d[thePositionOfMini] - d[thePositionOfMini - 1] > d[thePositionOfMini+1] - d[thePositionOfMini]){
        //移除右边石头
        toDelete(d, thePositionOfMini + 1);
    }else{
        toDelete(d, thePositionOfMini);
    }
    mInFuc--;
    nNow--;
    if (mInFuc == 0)
        theAns = mini;
    theFirstTry(mInFuc, nNow);
    return;
}
void toDelete(int a[],int n){
    for (int z = n;a[z]!=0;z++){
        a[z] = a[z + 1];
    }
    return;
}