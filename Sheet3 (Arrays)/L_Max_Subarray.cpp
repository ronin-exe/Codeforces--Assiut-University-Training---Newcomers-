#include <bits/stdc++.h>

void subArray(int arr[], int n)
{
    int max;
    
    for (int i=0; i <n; i++)
    {
        
        for (int j=i; j<n; j++)
        {
            max=arr[j];
            for (int k=i; k<=j; k++)
                if(arr[k]>max){
                        max=arr[k];
                    }

            std::cout << max <<" ";
        }
    }
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