#include <iostream>
using namespace std;
void adding(int a[], int n1, int n2)
{
    int temp = 0;
    temp = n2;
    for (int z = n2; z > n1; z--)
    {
        a[z] = a[z - 1];
    }
    a[n1] = temp;
    return;
}
void fuc(int a[], int n1, int n2)
{

    if (!(n1 < n2))
        return;
    int bas = a[n1];
    for (int z = n1 + 1; z < n2 + 1; z++)
    {
        if (a[z] < bas)
        {
            adding(a, n1, z);
        }
    }
    fuc(a, n1 + (int)((n1 + n2) / 2), n2);
    fuc(a, n1, n2 - 1 - (int)((n1 + n2) / 2));
    return;
}

int main()
{
    int n, a[100010];
    cin >> n;
    for (int z = 0; z < n; z++)
    {
        cin >> a[z];
    }
    fuc(a, 0, n - 1);
    for (int z = 0; z < n; z++)
    {
        cout << a[z];
    }
    return 0;
}