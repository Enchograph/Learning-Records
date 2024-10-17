#include <iostream>
using namespace std;
void sort(int a[], int begin, int end);
void exchange(int* a,int* b);
int main()
{
    int n;
    int a[100010];
    cin >> n;
    for(int z=0;z<n;z++){
        cin >> a[z];
    }
    sort(a, 0, n-1);
    for (int z = 0; z < n; z++)
    {
        cout << a[z]<<" ";
    }
    return 0;
}
void sort(int a[], int begin, int end){
    bool needing = 1;
    while(needing){
        needing = 0;
        for (int z = begin;z<end;z++){
            if(a[z]>a[z+1]){
                exchange(&a[z], &a[z + 1]);
                needing = 1;
            }
        }
    }
    return;
}
//!需要注意交换函数不能用待交换数作为形参!需用指针
void exchange(int* a,int* b){
    int temp;
	temp=*a;
    *a=*b;
    *b = temp;
    return;
}
