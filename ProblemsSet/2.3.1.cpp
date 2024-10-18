#include <iostream>
using namespace std;
double a, b, c, d;
double x[3]={-50,-50,-50};

double fc(double t)
{
    return a * t * t * t + b * t * t + c * t + d;
}
void aFuc();
int main(){
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    aFuc();
    return 0;
}

void aFuc(){
    for (double t = -100; t <= 100; t += 0.001){
        if (fc(t) >= 0 && fc(t + 0.001) <= 0 || fc(t) <= 0 && fc(t + 0.001) >= 0)
        {
            printf("%.2lf ",t+0.0005);
        }
    }
}
