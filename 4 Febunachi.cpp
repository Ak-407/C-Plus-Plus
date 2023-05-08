#include<iostream>
using namespace std;
int main(){
    int a=8;
    int b=0;
    int c=1;
    cout<<b<<" "<<c;
    for(int i=1;i<a; i++){
        // 0,1,1,2,3,5
        int z = b+c;
        cout<<" "<<z;
        b=c;
        c=z;

    }
   

}