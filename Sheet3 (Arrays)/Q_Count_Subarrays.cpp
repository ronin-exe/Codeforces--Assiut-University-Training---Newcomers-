#include <bits/stdc++.h>

void subArray(int arr[], int n)
{
    int max,t=0,sum=0;
    
    for (int i=0; i <n; i++)
    {
        
        for (int j=i; j<n; j++)
        {
            t=0;
            max=arr[i];
            for (int k=i; k<=j; k++){
                
                    if(arr[k]<max){
                        t++;
                        break;
                    }

                    else{
                        max=arr[k];
                    }
    
                
            }

            if(t==0){
                sum++;
            }
        }
    }

    std::cout<<sum;
}


int main(){
    int t,n,max;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>n;
        int a[n];

        for(int j=0;j<n;j++){
            std::cin>>a[j];
        }

        subArray(a,n);
    std::cout<<'\n';
    }
    return 0;
}