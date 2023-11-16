// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int mx=0;
    int mn=0;
   int grad [5]={10,20,60,88,-5};
   for (int i = 0 ;i<=4;i++){
       if (grad[i]>mx){
           mx=grad[i];
       }
       if (grad[i]<=grad[0]){
           mn=grad[i];
       }
       }
       cout<<"the minumum grad ="<<mn<<endl;
       cout<<"the maximum grad="<<mx<<endl;
   }
