#include <iostream>

using namespace std;
int main() {

    cout<<1<<endl;
    cout<<'1'<<endl;
    cout<<'a'<<endl;
    cout<<(char)97<<endl;
    operator <<(cout,'a');
    cout<<"--------"<<endl;
    cout.put('a');
    cout.put('\n');
    cout.write("Hello World!",5);
    cout<<"--------"<<endl;
    cout.width(10);
    //cout.fill('#');
    cout<<1;
    cout<<endl;

    float num=0.1234567;
    cout<<num<<endl;

    cout.precision(12);
    cout<<num<<endl;

    cout.setf(ios_base::showpos);
    cout<<1;
    cout<<endl;
    cout.unsetf(ios_base::showpos);
    cout<<2<<endl;
    cout<<"--------"<<endl;

    cout<<true<<endl;
    cout<<false<<endl;
    cout.setf(ios_base::boolalpha);
    cout<<true<<endl;
    cout<<false<<endl;

     cout<<"--------"<<endl;
     cout.setf(ios_base::left,ios_base::adjustfield);
     cout.width(10);
     cout<<-10<<20<<endl;

     cout<<"--------"<<endl;
     cout.setf(ios_base::right,ios_base::adjustfield);
     cout.width(10);
     cout<<-10<<20<<endl;

     cout<<"--------"<<endl;
     cout.setf(ios_base::internal,ios_base::adjustfield);
     cout.width(10);
     cout<<-10<<20<<endl;

     cout.setf(ios_base::oct,ios_base::basefield);
     cout<<16<<endl;
     cout.setf(ios_base::hex,ios_base::basefield);
     cout<<16<<endl;
     cout.setf(ios_base::dec,ios_base::basefield);
     cout<<16<<endl;

      cout<<"--------"<<endl;
      cout<<hex<<16<<endl;
      hex(cout);
      cout<<16<<endl;

    return 0;
}
