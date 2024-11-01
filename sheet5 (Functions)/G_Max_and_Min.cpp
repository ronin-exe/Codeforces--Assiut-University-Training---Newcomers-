#include <bits/stdc++.h>

void maxx(int a[], int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    std::cout<<m;
}

void minn(int a[], int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    std::cout<<m<<" ";
}

int main(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    minn(a,n);
    maxx(a,n);
    return 0;


}