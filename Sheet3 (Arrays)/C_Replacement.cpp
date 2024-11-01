#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i]<0){
            a[i]=2;
        }
        else if(a[i]>0){
            a[i]=1;
        }
    }

    for(int j=0;j<n;j++){
        std::cout<<a[j];
        if(j!=n-1){
            std::cout<<" ";
        }
    }
    return 0;
}