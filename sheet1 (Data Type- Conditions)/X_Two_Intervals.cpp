    #include <bits/stdc++.h>
    int main(){
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        if(std::max(a,c)>std::min(b,d)){
            std::cout<<"-1"<<'\n';
        }
        else{
            std::cout<<std::max(a,c)<<" "<<std::min(b,d)<<'\n';
        }
    }