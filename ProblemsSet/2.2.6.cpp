#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void myFuc(int z1, int z2);
long long ans = 0;
int a[500010], temp[500010];
int n;
int main(){
    scanf("%d", &n);
    for(int z=0;z<n;z++){
        scanf("%d", &a[z]);
    }
    printf("%lld",ans);
    return 0;
}
void myFuc(int z1,int z2){
    int k = z1;
    if (z1 >= z2)
        return;
    int mid = z1 + int((z2 - z1) / 2);
    int i = z1, j = mid + 1;
    //ans += myFuc(z1, mid);
    //ans += myFuc(mid + 1, z2);
    myFuc(z1, mid);
    myFuc(mid + 1, z2);
    /*for (int z = z1; z <= z2;z++){
        if (a[i] <= a[j])
        {
            temp[z] = a[j];
            j++;
            if (j > z2)
            {
                for (int y = i; y <= int((z2 - z1) / 2); y++)
                {
                    temp[z + 1 - i + y] = a[y];
                }
                for (int z = z1; z <= z2;z++)
                    a[z] = temp[z];
                break;
            }
        }
        else
        {
            temp[z] = a[i];
            ans += z2 - j + 1;
            i++;
            if (i > (z2 - z1) / 2)
            {
                for (int y = j; y <= z2;y++){
                    temp[z + 1 - j + y] = a[y];
                }
                for (int z = z1; z <= z2; z++)
                    a[z] = temp[z];
                break;
            }
        }
    }
    */
    while(k<=z2){
        if(i>mid){
            for (; j <= z2;j++){
                temp[k] = a[j];
                k++;
            }
        }else
        if (j > z2)
        {
            for (; i <= mid; i++)
            {
                temp[k] = a[i];
                k++;
            }
        }else
        if(a[i]<=a[j]){
            temp[k] = a[j];
            j++;
            k++;
        }else{
            ans += z2 - j + 1;
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    return;
}