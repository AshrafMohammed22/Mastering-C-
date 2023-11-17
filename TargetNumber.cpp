#include <iostream>
using namespace std;
int main(){
    int arry[10];
    cout<<"enter number"<<endl;
    for (int i =0 ; i<10 ; i++){
        cin>>arry[i];
    }
    cout<<"enter number u looking for"<<endl;
    int targetnumber ;
    cin>>targetnumber;
    bool found =false;
    int isexist=0;
    for(int i =0; i<10 ; i++ ){
        if(targetnumber==arry[i]){
            found = true;
            isexist=i;
            break;
        }
    }
    if (found){
        cout<<"the target number is exsist "<<isexist<<endl;
        
    }
    else{
        cout<<"the target number is not exsist"<<endl;
    }
}
