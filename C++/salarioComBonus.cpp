#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    string nome;
    double salarioFixo, vendasMes,salarioFinal;
    cin>>nome;
    cout<<fixed<<setprecision(2);
    cin>>salarioFixo>>vendasMes;
    salarioFinal = vendasMes*0.15+salarioFixo;
    cout<<"TOTAL = R$ "<< salarioFinal<<endl;

    return 0;
}