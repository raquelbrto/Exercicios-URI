#include <iostream>
#include <iomanip>
 using namespace std;

 int main(){

     double A,B,MEDIA;
     cin>>fixed>>setprecision(1);
     cin>>A>>B;
     cout<<fixed<<setprecision(5);
     MEDIA=(A*3.5+B*7.5)/11;
     cout<<"MEDIA = "<<setprecision(5)<<MEDIA;
     cout<<endl;
     return 0;
 }