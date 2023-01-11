//Crie um vetor representando os alunos de um determinado curso. Esse vetor deve conter uma estrutura que armazene a nome do aluno,//
//nota da primeira prova, nota da segunda prova, nota da terceira prova e a média.//
#include <iostream>
#include <string>
using namespace std;
//Abrindo um Struct aluno para amazenar as notas e as medias//
struct aluno{
    string nome;
	float nota1;
    float nota2;
    float nota3;
    float media;
};

int main() {
    aluno x[5];
    float maiormed;
    maiormed = 0;
    int i;
    i = 0;
   
   
    
   //criando um while que ira recerber até 5 vezes//
    while (i < 5){
	cout<<"Informe o Nome do Aluno: ";
	cin>>x[i].nome;
			
		 //recebendo o valor das notas//
    cout<<"informe a  primeira nota do aluno: \n";
    cin>> x[i].nota1;
    cout<<"Informe a segunda nota do Aluno: "<<endl;
    cin>> x[i].nota2;
    cout<<"Informe a terceira nota do Aluno: "<<endl;
    cin>> x[i].nota3;
    //calculando a media de cada aluno//
    x[i].media = (x[i].nota1 + x[i].nota2 + x[i].nota3)/3;
    
    //criando um comparativo para ele salvar so as maiores medias//
    if(maiormed < x[i].media)
	{
    	maiormed = x[i].media;
    	i = i + 1;
		
	}
	else{
		i = i + 1;
		continue;
	} 
	}
  
   //criando um for que irar passar por cada media e comparar e descobrir qual foi o dono da maior media//  
    for (int j = 0; j < 5; j++){
        if (x[j].media == maiormed)
        {
            cout <<"O Aluno que obteve a maior media foi: "<< x[j].nome <<" "<<"Que obteve: "<< " "  << x[j].media << endl;
        }
        else{
			continue;
		}
    }
    return 0;
}