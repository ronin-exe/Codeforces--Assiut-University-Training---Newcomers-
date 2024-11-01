    #include <bits/stdc++.h>
    int main(){
        long long a,b,c;
        std::cin>>a>>b>>c;
        if(a>=b && a>=c){
            if(b>=c){
                std::cout<<c<<" "<<a<<'\n';
            }
            else{
                std::cout<<b<<" "<<a<<'\n';
            }
        }
        else if(b>=a && b>=c){
            if(a>=c){
                std::cout<<c<<" "<<b<<'\n';
            }
            else{
                std::cout<<a<<" "<<b<<'\n';
            }
        }
        else if(c>=b && c>=a){
            if(b>=a){
                std::cout<<a<<" "<<c<<'\n';
            }
            else{
                std::cout<<b<<" "<<c<<'\n';;
            }
        }
     
        return 0;
     
    }