    #include <bits/stdc++.h>
    int main(){
        long long int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        if(b*log(a)>d*log(c)){
            std::cout<<"YES"<<'\n';
        }
        else{
            std::cout<<"NO"<<'\n';
        }
    }