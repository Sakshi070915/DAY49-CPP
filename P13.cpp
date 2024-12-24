#include <iostream>
using namespace std;

int main(){
    int a[3]={10,20,30};
    int*ptr=a;
    cout<<"access first elements "<<*ptr<<endl;
    cout<<"access second elements "<<*(ptr+1)<<endl;
    cout<<"access third elements "<<*(ptr+2)<<endl;

    return 0;
}