#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[110]={0};
    cin>>n;
    for (int z = 0;z<n;z++){
        cin >> a[z];
    }
    sort(a, a + n);
    int temp=0;
    for (int z = 0; z < n; z++)
    {
        if(temp!=a[z]){
            temp = a[z];
        }else{
            a[z] = 0;
        }
    }
    sort(a, a + n);
    int m = 0;
    for (int z = 0; z < n; z++)
    {
        if (a[z]!=0)
        {
            m++;
        }
    }
    cout << m<<endl;
    for (int z = 0; z < n; z++)
    {
        if (a[z] != 0)
        {
            cout << a[z]<<" ";
        }
    }
    return 0;
}