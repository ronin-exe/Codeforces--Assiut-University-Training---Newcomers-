#include <bits/stdc++.h>
int main(){
    long long a,b,s,n,i,j;
    std::cin>>n;
    for(i=0;i<n;i++){
        std::cin>>a>>b;
        s=0;
            if(b>=a){
            for(j=a+1;j<b;j++){
                if(j%2!=0){
                    s+=j;
                }
            }
            std::cout<<s<<'\n';
        }
        else{
            for(j=b+1;j<a;j++){
                if(j%2!=0){
                    s+=j;
                }
            }
            std::cout<<s<<'\n';
        }
    }
    return 0;
}