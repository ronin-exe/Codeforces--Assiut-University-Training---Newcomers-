#include <bits/stdc++.h>
int main(){
    long long a,i,j;
    std::cin>>a;
    for(i=2;i<=a;i++){
        if(i==2){
            std::cout<<2;
        }
        else{
            if(i%2!=0){
                int x=1;
                for(j=2;j<i;j++){
                    if(i%j==0){
                        x=2;
                        break;
                    }
                }
                if(x==1){
                    std::cout<<" "<<i;
                }
            }
        }
    }
    return 0;
}