#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int numFuncionario,horasTrabalhadas;
    double salario,valorHora;
    cin>>numFuncionario>>horasTrabalhadas>>valorHora;
    cout<<fixed<<setprecision(2);
    salario = horasTrabalhadas * valorHora;
    cout<<"NUMBER = "<< numFuncionario<<endl;
    cout<<"SALARY = $ "<<setprecision(2)<<salario<< endl;






    return 0;
}