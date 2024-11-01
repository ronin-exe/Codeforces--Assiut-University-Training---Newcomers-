    #include <bits/stdc++.h>
    int main(){
        char a;
        std::cin>>a;
        if(48<=(int)a && (int)a<=57){
            std::cout<<"IS DIGIT"<<'\n';
        }
        else if(97<=(int)a && (int)a<=122){
            std::cout<<"ALPHA"<<'\n'<<"IS SMALL"<<'\n';
        }
        else if(65<=(int)a && (int)a<=90){
            std::cout<<"ALPHA"<<'\n'<<"IS CAPITAL"<<'\n';
        }
        
        return 0;
     
    }