#include <bits/stdc++.h>

int div(int a[],int n){
    int s=0,m=0,x;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=1;j<=a[i];j++){
            if(a[i]%j==0){
                s++;
            }
        }

        if(s>m){
            m=s;
            x=a[i];
        }
        else if(s==m){
            a[i]>n;
            x=a[i];
        }
    }
    return x;
}

int pal(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        int temp,s=0;
        int t=a[i];
            for(;t>0;){
                temp=t%10;
                s=(s*10)+temp;
                t=t/10;
            }
        
        if(s==a[i]){
            sum++;
        }

        }
        return sum;
    }


int prim(int a[], int n){
    int s=0;
int t;
for(int i=0;i<n;i++){
    t=0;
    if(a[i]>1){
        if(a[i]==2){
            s++;
        }
        else{
            for(int j=2;j<sqrt(a[i]);j++){
                if(a[i]%j==0){
                    t++;
                    break;
                }
            }
            if(t==0){
                s++;
            }
        }
    }
}
return s;
}

int mn(int a[],int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<m){
            m=a[i];
        }
    }

    return m;
}

int mx(int a[],int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }

    return m;
}

int main(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    std::cout<<"The maximum number : "<<mx(a,n)<<'\n';
    std::cout<<"The minimum number : "<<mn(a,n)<<'\n';
    std::cout<<"The number of prime numbers : "<<prim(a,n)<<'\n';
    std::cout<<"The number of palindrome numbers : "<<pal(a,n)<<'\n';
    std::cout<<"The number that has the maximum number of divisors : "<<div(a,n)<<'\n';
    
    return 0;
}