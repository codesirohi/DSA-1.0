#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    
    return n*fact(n-1);


}

int main()
{

    int k;
    cin>>k;
    cout<<"factorial:  "<<fact(k)<<endl;
    return 0;
}