#include <bits/stdc++.h>
int main(){
    long long a,i,arr[99999];
    for(i=0;;i++){
        std::cin>>a;
        if(a=='\n'){
            break;
        }
        else{
            if(a!=1999){
                std::cout<<"Wrong"<<'\n';
            }
            else{
                std::cout<<"Correct"<<'\n';
                break;
            }
        }
    }
    return 0;
}