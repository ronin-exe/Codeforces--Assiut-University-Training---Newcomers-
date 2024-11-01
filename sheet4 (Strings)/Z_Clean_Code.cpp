#include <bits/stdc++.h>
int main(){
    std::string a[50];
    std::string x,y;
    int g=0,p;
    for(int i=0;;i++){
        p=0;
        getline(std::cin,x);
        if(x=="\0"){
            break;
        }
        if(x!=" "){
            for(int j=0;j<x.size();j++){
            if(x[j]=='/' && x[j+1]=='/' && g==0){
                break;
            }

            if(x[j]=='/' && x[j+1]=='*' && g==0){
                g==1;
                break;
            }

            if(x[j]=='*' && x[j+1]=='\\' && g==1){
                g==0;
            }
            if(g==0){
                y[p]=x[j];
                p++;
            }

        }
        }
        a[i]==y;
    }

    return 0;
}