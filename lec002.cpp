#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    freopen("output.txt","w",stdout);
   cout<<setw(10)<<setprecision(1)<<0.1f<<'\n';
    cout<<setw(10)<<setfill('#')<<setprecision(1)<<0.1f<<'\n';
     cout<<setw(10)<<setfill('#')<<setprecision(1)<<showpos<<0.1f<<'\n';
    return 0;
}