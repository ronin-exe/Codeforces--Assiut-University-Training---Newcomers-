#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int x[5]={0,0,0,0,0}; //e=0,g=0,y=0,p=0,t=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='e' || a[i]=='E'){
            x[0]++;
        }
        else if(a[i]=='g' || a[i]=='G'){
            x[1]++;
        }
        else if(a[i]=='y' || a[i]=='Y'){
            x[2]++;
        }
        else if(a[i]=='p' || a[i]=='P'){
            x[3]++;
        }
        else if(a[i]=='t' || a[i]=='T'){
            x[4]++;
        }
    }
    std::cout<<*std::min_element(x,x+5);
    return 0;
}