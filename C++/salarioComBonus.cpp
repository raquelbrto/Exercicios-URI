#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double salarioF, vendasT,salarioFinal;
    cin>>nome;
    cout<<fixed<<setprecision(2);
    cin>>salarioF>>vendasT;
    salarioFinal = vendasT*0.15+salarioF;
    cout<<"TOTAL = R$ "<< salarioFinal<<endl;



    return 0;
}