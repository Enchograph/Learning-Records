#include <iostream>
using namespace std;
void sort(int a[], int begin, int end);
void exchange(int *a, int *b);
void putting(int a[], int somenumber, int somewhere);
int main()
{
    int n;
    int a[100010];
    cin >> n;
    for (int z = 0; z < n; z++)
    {
        cin >> a[z];
    }
    sort(a, 0, n - 1);
    for (int z = 0; z < n; z++)
    {
        cout << a[z] << " ";
    }
    return 0;
}
void exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void putting(int a[], int somenumber, int somewhere){
    if(somenumber==somewhere)
        return;
    int temp=a[somenumber];
    if(somenumber<somewhere){
        for (int z = somenumber;z<somewhere;z++){
            a[z] = a[z + 1];
        }
        a[somewhere] = a[somenumber];
    }
    if (somenumber > somewhere)
    {
        for (int z = somenumber; z > somewhere; z--)
        {
            a[z] = a[z - 1];
        }
        a[somewhere] = a[somenumber];
    }
    return;
}

void sort(int a[], int begin, int end)
{
    int mini, thePosOfmini;
    for (int i = begin; i <= end;i++){
        mini = -1;
        thePosOfmini = -1;
        for (int j = i + 1; j <= end; j++)
        {
            if (mini > a[j])
            {
                mini = a[j];
                thePosOfmini = j;
            }
        }
        /*for (int j = i + 1; j <=end; j++)
        {
            if (a[thePosOfmini] > a[j])
                thePosOfmini = j;
        }*/
        exchange(&a[thePosOfmini], &a[i]);
    }
    return;
}