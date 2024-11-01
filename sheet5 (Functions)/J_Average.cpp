#include <bits/stdc++.h>

void avg(double a[], int n){
    double sum=0.00,av=0.00;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    av=sum/n;
    printf("%.7lf",av);
}


int main(){
    int n;
    std::cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    avg(a, n);
    return 0;
}