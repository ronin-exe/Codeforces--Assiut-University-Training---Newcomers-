    #include <bits/stdc++.h>
    int main(){
        long long a,b,c;
        std::cin>>a>>b>>c;
        if(a>=b && a>=c){
            if(b>=c){
                std::cout<<c<<'\n'<<b<<'\n'<<a<<'\n'<<'\n';
            }
            else{
                std::cout<<b<<'\n'<<c<<'\n'<<a<<'\n'<<'\n';
            }
        }
        else if(b>=a && b>=c){
            if(a>=c){
                std::cout<<c<<'\n'<<a<<'\n'<<b<<'\n'<<'\n';
            }
            else{
                std::cout<<a<<'\n'<<c<<'\n'<<b<<'\n'<<'\n';
            }
        }
        else if(c>=b && c>=a){
            if(b>=a){
                std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<'\n';
            }
            else{
                std::cout<<b<<'\n'<<a<<'\n'<<c<<'\n'<<'\n';
            }
        }
        std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
     
        return 0;
     
    }