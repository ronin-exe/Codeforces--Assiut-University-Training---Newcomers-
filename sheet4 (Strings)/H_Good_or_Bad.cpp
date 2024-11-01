#include <bits/stdc++.h>
int main(){
    std::string a;
    int n,x;
    std::cin>>n;
    for(int i=0;i<n;i++){
        x=0;
        std::cin>>a;
        for(int j=0;j<a.size();j++){
            if(a.substr(j,3)=="101" || a.substr(j,3)=="010"){
                std::cout<<"Good"<<'\n';
                x++;
                break;
            }
        }
        if(x==0){
            std::cout<<"Bad"<<'\n';
        }
    }
    return 0;
}