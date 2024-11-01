#include <bits/stdc++.h>

void concat(int a[],int b[], int n){
    for(int i=0;i<n;i++){
        std::cout<<b[i]<<" ";
    }

    for(int i=0;i<n;i++){
        std::cout<<a[i];
        if(i!=n-1){
            std::cout<<" ";
        }
    }

}
int main(){
    int n;
    std::cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }

    concat(a,b,n);
    return 0;
}