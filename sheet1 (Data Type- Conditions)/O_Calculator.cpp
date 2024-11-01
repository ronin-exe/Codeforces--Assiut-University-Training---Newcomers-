    #include <bits/stdc++.h>
    int main(){
        long long a,b;
        char s;
        std::cin>>a>>s>>b;
        if(s=='+'){
            std::cout<<a+b<<'\n';
        }
        else if(s=='-'){
            std::cout<<a-b<<'\n';
        }
        else if(s=='*'){
            std::cout<<a*b<<'\n';
        }
        else if(s=='/'){
            std::cout<<a/b<<'\n';
        }
        
        return 0;
     
    }