// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int arr1[5]={1,2,3,4,5};
int sumeven =0;int sumodd =0;
for (int i =0; i<5;i++){
   if(arr1[i]%2==0){
   sumeven=sumeven+arr1[i];
   }
   else{
   sumodd=sumodd+arr1[i];
   }
}
cout<<"the sum of odd element="<<sumodd<<endl;
   cout<<"the sum of even element="<<sumeven<<endl;

}
