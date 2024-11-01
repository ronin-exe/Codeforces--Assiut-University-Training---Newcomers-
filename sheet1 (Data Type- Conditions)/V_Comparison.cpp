    #include <bits/stdc++.h>
    int main(){
        int a,b;
        char x;
        std::cin>>a>>x>>b;
        if(x=='>'){
            if(a>b){
                std::cout<<"Right";
            }
            else{
                std::cout<<"Wrong";
            }
        }
     
        else if(x=='<'){
            if(a<b){
                std::cout<<"Right";
            }
            else{
                std::cout<<"Wrong";
            }
        }
     
        else if(x=='='){
            if(a==b){
                std::cout<<"Right";
            }
            else{
                std::cout<<"Wrong";
            }
        }
    }