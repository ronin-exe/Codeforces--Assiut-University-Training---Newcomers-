#include <bits/stdc++.h>

int main(){
    unsigned long long a;
    std::cin>>a;
    int t=0;

    if(a==2){
        std::cout<<"YES";
    }

    else if(a==1){
        std::cout<<"NO";
    }

    else if(a==0){
        std::cout<<"NO";
    }

    else{
        for(int i=2;i<=a/2;i++){
        if(a%i==0){
            std::cout<<"NO";
            t++;
            break;
        }
    }
    if(t==0){
        std::cout<<"YES";
    }
    }
     return 0;
}