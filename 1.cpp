#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
        for (int j = 1; j<=5-i; j++)
        {
            cout<<" ";
        }
        for(int k=0; k<=i*2; k++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}