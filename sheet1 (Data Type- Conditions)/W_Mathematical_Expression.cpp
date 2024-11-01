    #include <bits/stdc++.h>
    int main(){
        long long int a,b,c;
        char x,y;
        std::cin>>a>>x>>b>>y>>c;
        if(x=='+'){
            if(c==(a+b)){
                std::cout<<"Yes"<<'\n';
            }
            else{
                std::cout<<a+b<<'\n';
            }
        }
        if(x=='-'){
            if(c==(a-b)){
                std::cout<<"Yes"<<'\n';
            }
            else{
                std::cout<<a-b<<'\n';
            }
        }
        if(x=='*'){
            if(c==(a*b)){
                std::cout<<"Yes"<<'\n';
            }
            else{
                std::cout<<a*b<<'\n';
            }
        }
    }