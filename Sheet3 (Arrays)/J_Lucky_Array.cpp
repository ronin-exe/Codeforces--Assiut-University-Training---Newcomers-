#include <bits/stdc++.h>
int main(){
    int n,m,c=0;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(i==0){
            m=a[i];
        }
        else if(a[i]<m){
            m=a[i];
        }
    }

    for(int j=0;j<n;j++){
        if(a[j]==m){
            c++;
        }
    }

    if(c%2==0){
        std::cout<<"Unlucky";
    }
    else{
        std::cout<<"Lucky";
    }
}