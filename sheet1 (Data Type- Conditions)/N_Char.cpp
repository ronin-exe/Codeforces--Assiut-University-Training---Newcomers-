    #include <bits/stdc++.h>
    int main(){
        char a;
        std::cin>>a;
        if(97<=(int)a && (int)a<=122){
            std::cout<<(char)(a-32)<<'\n';
        }
        else if(65<=(int)a && (int)a<=90){
            std::cout<<(char)(a+32)<<'\n';
        }
        
        return 0;
     
    }