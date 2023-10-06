#include <iostream>
using namespace std;

int fibo(int a){
    if(a<=1){
        return 1;
    }
    return a*fibo(a-1);
}

int main(){
    int fib;
    cin>>fib;
    cout<<"Value is "<<fibo(fib);
    return 0;
}