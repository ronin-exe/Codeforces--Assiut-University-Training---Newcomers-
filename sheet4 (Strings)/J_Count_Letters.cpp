#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int n=a.size(), x[124]={0};
    for(int i=0;i<n;i++){
        x[a[i]]+=1;
    }
    for(int i='a'; i<='z';i++){
        if(x[i]!=0){
            std::cout<<(char)i<<" : "<<x[i]<<'\n';
        }
    }
    return 0;
}