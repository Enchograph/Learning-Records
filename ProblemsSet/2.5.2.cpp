#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, h[310]={0},tili=0;
    cin>>n;
    for (int z = 0; z < n ; z++ ){

        cin >> h[z];
    }
    sort(h, h + n+1);
    int i = 0, j = n;
    while(true){
        tili += (h[i] - h[j]) * (h[i] - h[j]);
        i++;
        if(i==j)
            break;
        tili += (h[i] - h[j]) * (h[i] - h[j]);
        j--;
        if (i == j)
            break;
    }
    cout << tili;
    return 0;
}