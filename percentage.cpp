#include <iostream>
using namespace std;
int main(){
    int p,c,m,h,e,max,x,total;
    float per;
    cout<<"Entre max number per subject: ";
    cin>>x;
    max=x*5;
    cout<<"obtain marks in physics: ";
    cin>>p;
    cout<<"obtain marks in chemistry: ";
    cin>>c;
    cout<<"obtain marks in maths: ";
    cin>>m;
    cout<<"obtain marks in hindi: ";
    cin>>h;
    cout<<"obtain marks in english: ";
    cin>>e;
    
    if(m<=x && p<=x && c<=x && h<=x && e<=x){
        total=p+c+m+h+e;
    cout<<"total marks obtain: "<<total<<" in "<<max<<endl;;
    per=(float)total/max*100.00;
    cout<<"percentage is : "<<per<<"%"<<endl;
    }else{
        cout<<"something wrong......!";
    }
   

    return 0;
}