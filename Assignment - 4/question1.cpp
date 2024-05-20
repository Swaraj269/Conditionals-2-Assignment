#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter your amount: ";
    cin>>n;
    int a,b,c,d,e,f,g,h,i;
    a = b = c = d = e = f = g = h = i =0;
    switch (n>=2000){
        case 1:
            a = n/2000;
            n -= a*2000;
            cout<<"Notes of 2000 = "<<a<< endl;
            break;
    }
    switch (n>=1000){
        case 1:
            b = n/1000;
            n -= b*2000;
            cout<<"Notes of 1000 = "<<b<< endl;
            break;
    }
    switch (n>=500){
        case 1:
            c = n/500;
            n -= c*500;
            cout<<"Notes of 500 = "<<c<< endl;
            break;
    }
    switch (n>=100){
        case 1:
            d = n/100;
            n -= d*100;
            cout<<"Notes of 100 = "<<d<< endl;
            break;
    }
    switch (n>=50){
        case 1:
            e = n/50;
            n -= e*50;
            cout<<"Notes of 50 = "<<e<< endl;
            break;
    }
    switch (n>=20){
        case 1:
            f = n/20;
            n -= f*20;
            cout<<"Notes of 20 = "<<f<< endl;
            break;
    }
    switch (n>=10){
        case 1:
            g = n/10;
            n -= g*10;
            cout<<"Notes of 10 = "<<g<< endl;
            break;
    }
    switch (n>=5){
        case 1:
            h = n/5;
            n -= h*5;
            cout<<"Notes of 5 = "<<h<< endl;
            break;
    }
    switch (n>=1){
        case 1:
            i = n/1;
            n -= i*1;
            cout<<"Notes of 1 = "<<i<< endl;
            break;
    }
    
    return 0;
}