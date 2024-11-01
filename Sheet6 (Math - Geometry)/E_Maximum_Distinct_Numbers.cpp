#include <bits/stdc++.h>

int main(){

    long long n;
    long long total=0;
    long long number=0;
    std::cin>>n;

    for(long long i=1;;i++){

        if(number+i>n){
            break;
        }

        number+=i;
        total++;

    }

    std::cout<<total;
    return 0;

}