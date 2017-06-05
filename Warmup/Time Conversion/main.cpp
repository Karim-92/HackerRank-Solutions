#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    string time;
    cin >> time;
    string amPm=time.substr(8,2);
    string minutesSeconds=time.substr(3,5);
    int tempTime=0;
    if(amPm=="AM"){
        if(time.substr(0,2)=="12"){
            cout<<"00:"+minutesSeconds;
        }
        else
            cout<<time.substr(0,8);
    }
    else{
        if(time.substr(0,2)=="12"){
            cout<<"12:"+minutesSeconds;
        }
        else{
            tempTime=stoi(time.substr(0,2));
            tempTime+=12;
            cout<<tempTime<<":"<<time[3]<<time[4]<<":"<<time[6]<<time[7];
        }
    }
    return 0;
}
