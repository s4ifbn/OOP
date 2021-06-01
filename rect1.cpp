#include <iostream>
using namespace std;
// This is a simple class definition
// for lesson https://www.youtube.com/watch?v=i4SN8XFVpTk
// for more lessons visit https://s4ifbn.com
// By Saif Bashar 2016

class rectangle{
 public:
    int width;
    int length;

    int area(){
        return (width * length);
    }

    int circum(){
    return ((width+length)*2);
    }

}; //END OF CLASS

int main(){

    rectangle r1;

    cin>>r1.width;
    cin>>r1.length;

    cout<<r1.area()<<endl;
    cout<<r1.circum()<<endl;

    return 0;
}
