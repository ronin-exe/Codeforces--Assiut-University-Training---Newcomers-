    #include <bits/stdc++.h>
    int main(){
        long long n,y=0,m=0;
        std::cin>>n;
        for(;;){
            if(n>=365){
                n-=365;
                y++;
        }
        else break;
        }
        for(;;){
            if(n>=30){
                n-=30;
                m++;
        }
        else break;
        }
        std::cout<<y<<" years"<<'\n'<<m<<" months"<<'\n'<<n<<" days"<<'\n';
        return 0;
     
    }