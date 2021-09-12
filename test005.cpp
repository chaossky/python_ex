#include <iostream>
#include <cfloat>
#include <math.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int main(){
    unsigned int num0=0b00111111100000000000000000000000 ;
    float num1;
    memcpy(&num1,&num0,sizeof(num0));
    cout.precision(64);
    cout<<"num1 = "<<num1<<endl;

    unsigned int num2=0b00111111100000000000000000000001 ;
    float num3;
      memcpy(&num3,&num2,sizeof(num2));
       cout<<"num3 = "<<num3<<endl;
       cout<<"The difference "<<num3-num1<<endl;
       cout<<"Epsilon Value= "<<FLT_EPSILON<<endl;
}