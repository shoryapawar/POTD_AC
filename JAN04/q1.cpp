#include<bits/stdc++.h>
int main(){
    int n;
    std::cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j =1; j<2*n; j++)
        {
            if( ( i==1&&j%2!=0) || (i==j) || (i+j==2*n))
            std::cout<<"*";
           
            else 
            std::cout<<" ";
        }
        std::cout<<std::endl;
        
       
    }
    
}