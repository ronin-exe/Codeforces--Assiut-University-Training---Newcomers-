    #include <bits/stdc++.h>
    int main(){
        int a,x;
        std::cin>>a;
        x=a/1000;
        if(x%2==0){
            std::cout<<"EVEN"<<'\n';
        }
        if(x%2!=0){
            std::cout<<"ODD"<<'\n';
        }
        return 0;
     
    }