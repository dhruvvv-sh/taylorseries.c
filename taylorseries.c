#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.141592;
    float x;
    printf("enter your number:");
    scanf("%f",&x);
    x = x * (pi/180);
    float no = x;
    float term = x;
    float sum = x;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i;
    for (i=1;i<n;i=i+1){
        term = term * ((-1)*x*x) / (2*i*(2*i + 1));
        sum = sum + term; 
    }
    printf("the value of taylor series sin(%.2f) : %.2f \n",no,sum);
    printf("Library value of sin(%.2f) : %.2f\n", no, sin(x));
    
}
