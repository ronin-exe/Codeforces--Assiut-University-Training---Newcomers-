#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int x=0,n=a.size();
    for(int i=0;i<n;i++){
        if(x==5){
            break;
        }
        else if(x==0 && a[i]=='h'){
            x++;
        }
        else if(x==1 && a[i]=='e'){
            x++;
        }
        else if(x==2 && a[i]=='l'){
            x++;
        }
        else if(x==3 && a[i]=='l'){
            x++;
        }
        else if(x==4 && a[i]=='o'){
            x++;
        }
    }
    if(x==5){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}