#include<iostream>
using namespace std;
//head recursion
void fun1(int n){
    if(n>0)
    {
        cout<<n;
        fun1(n-1);
    }
}
//tail recursion
void fun2(int n)
{
    if(n>0){
        fun2(n-1);
        cout<<n;
    }
}
int main(){
    int x=3;
    fun1(x);
    cout<<endl;
    fun2(x);
}
