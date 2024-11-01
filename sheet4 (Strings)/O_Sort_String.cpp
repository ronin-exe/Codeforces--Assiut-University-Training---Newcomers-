#include <bits/stdc++.h>
int main(){
    std::string a;
    int n,m,G;
    std::cin>>n;
    m=n-1;
    std::cin>>a;
    for(int i=1;i<n;i++){
        G=0;
        for(int j=0;j<m;j++){
            if(a[j]>a[j+1]){
                std::swap(a[j], a[j + 1]);
                G=1;
            }
            if (G==0){
                break;
            }
        }
        m--;
    }
    std::cout<<a;
    return 0;
}