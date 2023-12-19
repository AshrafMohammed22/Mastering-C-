#include <iostream>
#include <string>
using namespace std;
class youtube
{
    private:
    string name;
    int video;
    int sub;
    public:
    void add(string n, int vid,int s){
        name=n;
        video=vid;
        sub=s;
        
    }
    void print(){
        cout<<"the name of object is  "<<name<<endl;
        cout<<"the video is "<<video<<endl;
        cout<<"the sub is"<<sub<<endl;
    }
    
};
int main() {
    youtube a1;
   a1.add("ashraf",23,10);
   a1.print();
   
    return 0;
}
