    #include <bits/stdc++.h>
    int main(){
        double a;
        std::cin>>a;
        int b = (int)a;
        if(a-b>0){
            std::cout<<"float "<<b<<" "<<a-b<<'\n';
        }
        else{
            std::cout<<"int "<<a<<'\n';
        }
        
    }