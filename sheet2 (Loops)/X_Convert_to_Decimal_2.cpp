#include <bits/stdc++.h>

int main(){
    int n,t,D,B,j,sum=0;
    int s[32];
    int x;
    std::cin>>t;
    for(int i=0;i<t;i++){
        sum=0;
        std::cin>>n;
        for(j=0;n>0;){
        x = n % 2;
        if(x!=0){
            s[j]='1';
            j++;
        }
        n = n / 2;
    }

    for(int k=0;k<j;k++){
        sum+=pow(2,k);
    }
    std::cout<<sum<<'\n';
    }
}