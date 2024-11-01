#include <bits/stdc++.h>
int main(){
    std::string a;
    getline(std::cin,a);
    int c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='=' && c==0){
            std::cout<<"username: ";
            for(i = i+1;isalpha(a[i]);i++){
                std::cout<<a[i];
            }
            std::cout<<'\n';
            c++;
        }
        else if(a[i]=='=' && c==1){
            std::cout<<"pwd: ";
            for(i = i+1;isalpha(a[i]);i++){
                std::cout<<a[i];
            }
            std::cout<<'\n';
            c++;
        }
        else if(a[i]=='=' && c==2){
            std::cout<<"profile: ";
            for(i = i+1;isalpha(a[i]);i++){
                std::cout<<a[i];
            }
            std::cout<<'\n';
            c++;
        }
        else if(a[i]=='=' && c==3){
            std::cout<<"role: ";
            for(i = i+1;isalpha(a[i]);i++){
                std::cout<<a[i];
            }
            std::cout<<'\n';
            c++;
        }
        else if(a[i]=='=' && c==4){
            std::cout<<"key: ";
            for(i = i+1;isalpha(a[i]);i++){
                std::cout<<a[i];
                if(i+1==a.size()){
                    break;
                }
            }
            std::cout<<'\n';
            c++;
        }
    }
}