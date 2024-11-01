#include <bits/stdc++.h>
 int main(){
    std::string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    std::string org="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string a;
    int n,x;
    std::cin>>n;
    std::cin>>a;
    if(n==1){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<org.size();j++){
                if(a[i]==org[j]){
                    x=j;
                    break;
                }
            }
            std::cout<<key[x];
        }
    }

    else{
        for(int i=0;i<a.size();i++){
            for(int j=0;j<org.size();j++){
                if(a[i]==key[j]){
                    x=j;
                    break;
                }
            }
            std::cout<<org[x];
        }
    }

    return 0;
    
 }