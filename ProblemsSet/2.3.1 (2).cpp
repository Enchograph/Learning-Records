#include <iostream>
using namespace std;
double a, b, c, d;
double cubicFunction(double t)
{
    return a * t * t * t + b * t * t + c * t + d;
}
int main(){
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double r, l, m;
    for (double z = -100;z<100;z++){
        if(cubicFunction(z)==0){
            printf("%.2lf ", z);
        }
        if (cubicFunction(z)*cubicFunction(z+1)<0)
        {
            l = z;
            r = z + 1;
            while(r-l>0.001){
                m = (l + r) / 2;
                if(cubicFunction(m)*cubicFunction(l)<=0){
                    r = m;
                }else{
                    l = m;
                }
            }
            printf("%.2lf ", m);
        }
    }
    return 0;
}