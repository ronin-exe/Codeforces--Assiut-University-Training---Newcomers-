#include <bits/stdc++.h>

int main(){
    int n,s=0;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==0){
            s++;
        }
        else{
            std::cout<<a[i]<<" ";
        }
    }

    for(int i=0;i<s;i++){
        std::cout<<0;
        if(i!=s-1){
            std::cout<<" ";
        }
    }
    return 0;
}