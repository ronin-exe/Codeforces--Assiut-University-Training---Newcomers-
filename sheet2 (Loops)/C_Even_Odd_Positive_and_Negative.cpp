#include <bits/stdc++.h>
int main(){
    long long x,a,e=0,o=0,p=0,n=0,i;
    std::cin>>x;
    for(i=0;i<x;i++){
        std::cin>>a;
        if(a%2==0){
                e++;
            if(a>0){
                p++;
            }
            else if(a<0){
                n++;
            }
        }

        else if(a%2!=0){
                o++;
            if(a>0){
                p++;
            }
            else if(a<0){
                n++;
            }
        }
    }

    std::cout<<"Even: "<<e<<'\n'<<"Odd: "<<o<<'\n'<<"Positive: "<<p<<'\n'<<"Negative: "<<n<<'\n';
    return 0;
}