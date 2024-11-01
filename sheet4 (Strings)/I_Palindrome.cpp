#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int x=0,n= a.size();
    for(int i=0,j=n-1;i<n/2;i++,j--){
        if(a[i]!=a[j]){
            x++;
            std::cout<<"NO";
            break;
        }
    }
    if(x==0){
        std::cout<<"YES";
    }
}