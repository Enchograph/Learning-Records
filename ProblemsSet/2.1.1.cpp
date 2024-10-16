#include <iostream>
using namespace std;
int main(){
    int n, x, y,  a[10010], b[10010], g[10010], k[10010],cache=-1;
    cin>>n;
    for (int f = 1; f < n+1;f++){
        cin >> a[f] >> b[f] >> g[f] >> k[f];
        
    }
    cin >> x >> y;
    for (int f = 1; f < n + 1; f++)
    {
        if(x>=a[f]&&x<=(a[f]+g[f])&&y>=b[f]&&y<=(b[f]+k[f]))
            cache = f;
    }
    cout << cache;
    return 0;
}
