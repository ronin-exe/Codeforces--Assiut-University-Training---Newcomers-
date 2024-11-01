    #include <bits/stdc++.h>
    int main(){
        double a,b;
        std::cin>>a>>b;
        if(a>0 && b>0){
            std::cout<<"Q1"<<'\n';
        }
        else if(a>0 && b<0){
            std::cout<<"Q4"<<'\n';
        }
        else if(a<0 && b>0){
            std::cout<<"Q2"<<'\n';
        }
        else if(a<0 && b<0){
            std::cout<<"Q3"<<'\n';
        }
        else if(a==0 && b==0){
            std::cout<<"Origem"<<'\n';
        }
        else if(a==0 && b!=0){
            std::cout<<"Eixo Y"<<'\n';
        }
        else if(a!=0 && b==0){
            std::cout<<"Eixo X"<<'\n';
        }
        
        return 0;
     
    }