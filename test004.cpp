#include <iostream>
#include <cfloat>
#include <math.h>

using namespace std;
int main(){
    float num0=1.0f;
    float num1=0.0f;

    for (int i=0;i<10;i++){
        num1=num1+0.1;
        //cout<< num0 << " -- "<<num1 <<'\n';
    }
 cout<< num0 << " -- "<<num1 <<'\n';
    if (num0==num1)
        cout<<"Equal 0"<<endl;

    if (fabsf(num0-num1) <= FLT_EPSILON)
        cout<<"Eqaul 1"<<endl;
}