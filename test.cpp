#include <iostream>
#include <limits>
#include <numeric>

using namespace std;
int main(){
    float f01=1.5454f;
    cout<<f01/0.001<<endl;
    cout<<(int)numeric_limits<uint8_t>::max() << endl;//형변환
    cout<<numeric_limits<uint16_t>::max() << endl;
    cout<<numeric_limits<uint32_t>::max() << endl;
    cout<<numeric_limits<uint64_t>::max() << endl;
    cout<<numeric_limits<uint64_t>::max()<< endl;
    cout<<numeric_limits<int64_t>::min()<< endl;
    cout<<"Kim ";
    return 0;
}
