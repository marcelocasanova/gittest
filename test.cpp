#include <iostream>
using namespace std;

int main() {
    int time=20;
    string ftime = (time<10)? "Good Morning" : ((time<20)? "Good Day" : "Good Evening"); 
    cout<<ftime;
    cout<<"somthing";
    return 0;
}