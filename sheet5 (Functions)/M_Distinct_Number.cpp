#include <bits/stdc++.h>

void check(int b[],int a[],int n){
    int p=0,t=0,sum=0;
    for(int i=0;i<n;i++){
        t=0;
        for(int j=0;j<n;j++){
            if(b[j]==a[i]){
                t++;
                break;
            }
        }
        if(t==0){
            b[p]==a[i];
            p++;
        }
    }

    for(int i=0;i<n;i++){
        if(b[i]!=0){
            sum++;
        }
    }

    std::cout<<sum;
}

int main(){
    int n;
    std::cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    check(b,a,n);


}