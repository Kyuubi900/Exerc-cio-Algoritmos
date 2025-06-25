#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    string nomes[5];
    float notas[5][3], validar;

    for(int i=0; i < 5; i++){
        cout << "Digite o nome do " << i + 1 << " aluno: ";
        cin >> nomes[i];

        for(int j = 0; j < 3; j++){
                while(true){
                    cout << "Digite a " << j + 1 << "ª nota de " << nomes[i] << ": ";
                    cin >> validar;
                    if(validar >= 0 && validar <= 10){
                        notas[i][j] = validar;
                        break;
                    }else{
                        cout << "Nota Invalida!";
                        system("Pause");
                    }
                }
        }
        cout << endl;
    }

    cout << "ALUNO\tN1\tN2\tN3\tMEDIA\tSITUACAO\n";

    float maiorMedia = 0.0;
    int indiceMaiorMedia = 0;

    for (int i = 0; i < 5; i++) {
        float media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;

        cout << nomes[i] << "\t";
        cout << notas[i][0] << "\t";
        cout << notas[i][1] << "\t";
        cout << notas[i][2] << "\t";
        cout << media << "\t";

        if (media >= 7.0)
            cout << "Aprovado";
        else
            cout << "Reprovado";

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }

        cout << endl;
    }
    cout << "\nAluno com a maior média é: " << nomes[indiceMaiorMedia] << " com média " << maiorMedia << endl;

    return 0;
}
