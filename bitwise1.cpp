#include<bits/stdc++.h>
using namespace std;

bool isPrime(int no){
    if(no==1){
        return false;
    }

    for(int i=2;i*i <no;i++)
    {
        if(no%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<"  is prime  ";
    
    }
    else{
        cout<<n<<"  is not prime";
    }

    return 0;
}
