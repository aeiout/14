#include<iostream>
using namespace std;
int findDivisor(int x){
    int i=2;
    while(i<=x){
    if(x%i==0){
        return i;
    }else{
        i++;
    }
}
return i;
}
int main(){
    int x;
    cout<<"Input :";
    cin >> x;
    cout<<"Output :"<<findDivisor(x);
}