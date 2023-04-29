#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
    double A,B,C,MEDIA;
    cin >> fixed >> setprecision(1);
    cin >> A >> B >> C;
    cout << fixed << setprecision(5);
    MEDIA = (A*2.0 + B*3.0+C*5.0)/10;
    cout <<"MEDIA = " << setprecision(1)<< MEDIA ;
    cout<< endl;
 
    return 0;
}