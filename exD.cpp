#include<iostream>
using namespace std;
int main(){
    int m=0, f=0, i=1, idadeM=0, T_idadeM=0, idadeF=0, T_idadeF=0, cM=0, cF=0;
    char pessoa;
    
    
    while (i<=10){
        cout << "sexo(m/f)?: ";
        cin >> pessoa;

        if (pessoa == 'm'){
            m++;
            cout << "idade: ";
            cin >> idadeM;
            T_idadeM += idadeM;
            cM++;

        }
        else{
            cout << "idade: ";
            cin >> idadeF;
            T_idadeF += idadeF;
            f++;
            cF++;
        }
        i++;
    }
    cout << "Masculino: " << m <<endl;
    cout << "Feminino: " << f <<endl;
    cout << "Idade media M: " << T_idadeM/cM <<endl;
    cout << "Idade media F: " << T_idadeF/cF <<endl;
    cout << "Proporcao de Masculino: " << m*10 << "%" <<endl;
    cout << "Proporcao de Feminino: " << f*10 << "%" <<endl;


    return 0;
}