#include <iostream>

using namespace std;

class Calculator
{
public:
    Calculator() {};
   
    ~Calculator() {};
    int PrimeGenerator(int,int);

private:
    
};

int main(int argc, const char** argv) {
    cout<<"please enter two numbers: "<<endl;
    int ,y;
    cin >> x>>y;

    return 0;
} 
int Calculator::PrimeGenerator(int x,int y){

    for (int i = x; i < y; i++)
    {
        bool prime =true;
        for (int j=2;j*j<=i:j++){
            prime =false;
            break;
        }
        
    }
}