#include <stdio.h>
#include  <math.h>

int main () {
    float a,b,h,x;
    a=2;
    b=4;
    h=0.2;
    /*scanf("%f %f %f", &a, &b, &h);*/
    for (;a<=b;a=a+h){
        if (a<2.5){
            printf("%f\n",cos(log(a*a)));
        }
        else if (a>=2.5 && a<=3.5){
            printf("%f\n",1/cos(pow(a,4)));
                   
            }
        else {
        printf("%f\n",tan(sin(a)));
        }
    }
}