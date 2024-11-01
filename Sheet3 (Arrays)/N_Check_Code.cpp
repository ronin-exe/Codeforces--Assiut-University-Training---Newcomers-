#include <bits/stdc++.h>
int main(){
    int a,b,n,x,t=0;
    std::cin>>a>>b;
    n=a+b+1;
    std::string s;
    std::cin>>s;
    for(int i=0;i<n;i++){
        x=s[i]-'0';
        if(i!=a){
            if(x<0 || x>9){
                std::cout<<"No";
                t++;
                break;
            }
        }
        else{
            if(s[i]!='-'){
                std::cout<<"No";
                t++;
                break;
            }
        }

    }

    if(t==0){
        std::cout<<"Yes";
    }
}