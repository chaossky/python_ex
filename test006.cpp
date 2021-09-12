#include <iostream>
#include <cfloat>
#include <math.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int main() {
float num0=1.0f;
unsigned int num1=0b00110100000000000000000000000000;
unsigned int num3=0b00110011000000000000000000000000;
float num2;
float num4;
unsigned int num3=0b00110011000000000000000000000000;
memcpy(&num2,&num1,sizeof(num1));
memcpy(&num2,&num1,sizeof(num1));
cout.precision(64);
cout<<num0+num2;


//0011,1111,1000,0000,0000,0000,0000,0000=1.0(2)
//0011,0100,0000,0000,0000,0000,0000,0000=1.0(2)*10^-23(2)
  return 0;
}