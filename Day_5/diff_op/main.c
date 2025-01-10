#include<stdio.h>

int ad(int l, int n){
    if (n <= l){
        return l;
    }
    return n + ad(l, n - 1);
}

int su(int l, int n){
    if (n <= l){
        return l;
    }
    return n + (su(l, n - 1));
}

float mu(float l, float n){
    if (n <= l){
        return l;
    }
    return n * mu(l, n - 1);
}

double di(double l, double n){
    if (n <= l){
        return l;
    }
    return di(l, n - 1) / n;
}

void main(){
    int n;
    double l, u;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 10 && n>=0 ){
        l = 1; u = 10;
        printf("%d", ad(l, u));
    }
    else if (n <= 20 && n>=11 ){
        l = -20; u = -11;
        printf("%d", su(l, u));
    }
    else if (n <= 30 && n>=21 ){
        l = 21; u = 30;
        printf("%f", mu(l, u));
    }
    else if (n <= 40 && n>=31 ){
        l = 31; u = 40;
        printf("%Le", di(l, u));
    }
    
}