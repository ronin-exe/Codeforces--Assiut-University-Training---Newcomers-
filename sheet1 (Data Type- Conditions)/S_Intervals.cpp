    #include <bits/stdc++.h>
    int main(){
        double a;
        std::cin>>a;
        if(a>=0 && a<=25){
            std::cout<<"Interval [0,25]"<<'\n';
        }
        else if(a>25 && a<=50){
            std::cout<<"Interval (25,50]"<<'\n';
        }
        else if(a>50 && a<=75){
            std::cout<<"Interval (50,75]"<<'\n';
        }
        else if(a>75 && a<=100){
            std::cout<<"Interval (75,100]"<<'\n';
        }
        else {
            std::cout<<"Out of Intervals"<<'\n';
        }
        return 0;
     
    }