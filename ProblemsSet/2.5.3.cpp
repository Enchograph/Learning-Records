#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int w, n, a[30010],ans;
    cin>>w>>n;
    for (int z = 0; z < n; z++){
        cin >> a[z];
    }
    sort(a,a+n);
    int z,i=0;
    ans = n;
    for (z = n - 1; z > 0; z--)
    {
        if(i>=z)
            break;
        if(a[z]+a[i]<=w){
            i++;
            ans--;

        }
    }
    cout << ans;
    return 0;

}