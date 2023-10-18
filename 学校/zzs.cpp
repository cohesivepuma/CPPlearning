//
// Created by 顾峻祥 on 2023/10/17.
//
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a=0,b,x;
    cin>>x;
    b=x;//输入数据
    while(b>0){
        b=b/10;//除一次少一位
        a=a+1;//每次加一
    }
    cout<<a<<endl;
    int c,d,e;
    c=x;//每次循环之后数字都会改变
    e=a;//所以要给其赋值
    while(e>0){
        d=c/pow(10,e-1);//除去之后便是当前数的首项
        c = c % static_cast<int>(pow(10, e-1));//抹掉首项
        e=e-1;
        cout<<d<<" ";
    }
    cout<<endl;
    int f,g,h,i=0,sum=0;
    f=a;
    g=x;
    while(f>0){
        h=g/pow(10,f-1);//跟上面一样
        g = g % static_cast<int>(pow(10, f-1));
        f=f-1;
        sum+=h*pow(10,i);//最高位*十的0次方，次高项乘十的1次方，以此类推。
        i=i+1;
    }
    cout<<sum<<endl;
    return 0;
}