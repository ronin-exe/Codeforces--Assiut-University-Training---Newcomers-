#include <bits/stdc++.h>
int main(){
    int k,s;
    std::cin>>k>>s;
    int x,y,z;
    int total=0;;
    for(x=0;x<=k;x++){
        for(y=0;y<=k;y++){
            for(z=0;z<=k;z++){
                if(x+y+z==s){
                    total++;
                }
    }
    }
    }
    std::cout<<total;
    return 0;
}