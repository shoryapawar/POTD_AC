#include <iostream>
using namespace std;

int main() {
        // your code goes here
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=n-i;j>1;j--)
                cout<<" "; // for spacing

            for(int k=0;k<=i;k++)
                cout<<" *"; // for printing star 

            cout<<endl;
        }
        return 0;
}