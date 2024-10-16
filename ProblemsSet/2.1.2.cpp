#include <iostream>
using namespace std;
int main(){
    int n,a[110]={},maxz=0;
    cin>>n;
    int z = n;
    for (z = n; z > 0;z--){
        cin >> a[z];
        if(a[z] != 0)
            maxz = a[z];
    }
    z = 0;
    cin >> a[z];
    if(n>=2){
        z = n;
        if (a[z] == 1)
            cout << "x^" << z;
        else if (a[z] == -1)
            cout << "-" << "x^" << z;
        else
        {
            if (a[z] > 0)
                cout << a[z] << "x^" << z;
            if (a[z] == 0)
                ;
            if (a[z] < 0)
                cout << a[z] << "x^" << z;
        }
        for (int z = n - 1; z > 1; z--)
        {
            if (a[z] == 1)
                cout << "+" << "x^" << z;
            else if (a[z] == -1)
                cout << "-" << "x^" << z;
            else
            {
                if (a[z] > 0)
                    cout << "+" << a[z] << "x^" << z;
                if (a[z] == 0)
                    continue;
                if (a[z] < 0)
                    cout << a[z] << "x^" << z;
            }
        }
        
    }
    if(n>=1){
        z = 1;
        if (a[z] == 1)
            cout << "+" << "x";
        else if (a[z] == -1)
            cout << "-" << "x";
        else
        {
            if (a[z] > 0)
                cout << "+" << a[z] << "x";
            if (a[z] == 0)
                ;
            if (a[z] < 0)
                cout << a[z] << "x";
        }
    }
    z = 0;
    if(maxz!=0){
        if (a[z] > 0)
            cout << "+" << a[z];
        if (a[z] < 0)
            cout << a[z];
    }
    else{
        cout << a[z];
    }
    return 0;
}