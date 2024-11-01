#include <bits/stdc++.h>
int main(){
    int n,m,t;
    std::cin>>n;
    m=n-1;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    for(int k=m;k>0;k--){
        for(int j=0;j<k;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

    return 0;
    
}