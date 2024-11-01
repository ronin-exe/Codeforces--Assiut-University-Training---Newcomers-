#include <bits/stdc++.h>
int main(){
    std::string a,b;
    std::cin>>a>>b;
    int n=std::min(a.length(),b.length()),x=0;
        for(int i=0; i<n; i++ ){
            if(a[i]<b[i]){
                std::cout<<a;
                x++;
                break;
            }
            else if(a[i]>b[i]){
                std::cout<<b;
                x++;
                break;
            }
        }

        if(x==0){
            if(a.length()<b.length()){
                std::cout<<a;
            }
            else{
                std::cout<<b;
            }
        }
    
    return 0;
}