#include <bits/stdc++.h>

bool pal(int a[],int n){
    for(int i=0,j=n-1;i<n/2;i++,j--){
        if(a[i]!=a[j]){
            return false;
        }
    }

    return true;
}

void binary(int n){
    int a[32];
    int i=0;
    for(i;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }

    if(pal(a,i)){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
}
int main(){
    long long n;
    std::cin>>n;
    if((n%2)!=0){
        binary(n);
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}