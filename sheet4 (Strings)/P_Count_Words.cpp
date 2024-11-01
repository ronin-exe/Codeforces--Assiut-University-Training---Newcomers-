
#include <bits/stdc++.h>
int main(){
    std::string a;
    getline(std::cin,a);
    int s=0,x=0;
    for(int i=0;i<a.size();i++){
        if(isalpha(a[i]) && x==0){
            s++;
            x++;
        }
        else if(!isalpha(a[i]) && x==1){
            x--;
        }
    }

    std::cout<<s;
    return 0;
}