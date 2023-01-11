/*
Discente: Joao Mateus Alves Felinto
 	 Matricula:121210342
 	 Período: 21.1
 	 Curso: Engenharia Elétrica
 	 Disciplina: Técnicas de Programação
 	 Turma: 01
 	 Professor: Marcus Salerno
 	 Unidade 6: LVP-08
*/

#include <iostream>
#include <locale>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stack>
#include <vector>
using namespace std;
#include "Paciente.cpp"
#include "Hospital.cpp"

/*A parte do menu de interação do usuario */

int main(){
setlocale(LC_ALL, "Portuguese");
paciente novo;
hospital lista;
unsigned info,registro; 
string nome,motivo;
while(true){
	system("cls");
	cout<<"##################################################"<< endl;
	cout<<"              ~HOSPITAL UFCG PB~                      "<<endl;
	cout<<"               Fila de espera                      "<<endl;
	cout<<"##################################################"<<endl;
	cout<<"Digite:"<<endl;
	cout<<"1)Adicionar um paciente."<<endl;
	cout<<"2)Atender paciente."<<endl;
	cout<<"3)Remover paciente."<<endl;
	cout<<"4)Exibir Fila de espera."<<endl;
	cout<<"5)Exibir dados do paciente."<<endl;
	cout<<"6)Exibir lista de paciente atendidos.\n"<<endl;
	cout<<"0)Encerrar Sistema: "<<endl;
	cout<<"Informe sua opção: "<<endl;
	cin >> info;
	if (info == 0 ){
	break;
 }
 system ("cls");
	
	switch(info){
		system ("cls");
		//referente adicionamento da ficha do paciente//
		case 1:
			cout<<"Informe o nome do paciente: "<<endl;
			cin.ignore();
			getline(cin,nome);
			novo.setnome(nome);
			cout<<"Informe o n° de registro: "<<endl;
			cin>>registro;
			novo.setregistro(registro);
			cout<<"Informe o motivo do paciente: "<<endl;
			cin>>motivo;
			novo.setmotivo(motivo);
			
			if(lista.add_paciente(novo,registro)==1){
				cout<<"Paciente cadastrado com êxito!!"<<endl;
				break;
			}
			
			else
			{
				cout<<"Erro, paciente já consta no banco de dados!!"<<endl;
				break;
			}
		
		//para atendimento tirando da fila//
		system ("cls");
		case 2:
			if(lista.atendimento_paciente() == 1){
				cout<<"Paciente atendido com sucesso!"<<endl;
				break;
			}
			else
			{
				cout<<"Nenhum paciente na fila de espera!"<<endl;
				break;
			}
			
		
		//para remover um paciente da lista//
		
		case 3:
			if(lista.remover_paciente() == 1){
				cout<<"Paciente removido da fila com sucesso!"<<endl;
				break;
			}
			else{
				cout<<"Paciente não encontrado!"<<endl;
				break;
			}
			
			
		//Exibe a lista de pacientes//	
		case 4:	
			if(lista.mostrar_fila() == 1){
				cout<<"Mostrar informações de todos os pacientes! ";
				break;
			}
			else{
				cout<<"Nenhum paciente na fila de espera! "<<endl;
				break;
			}
			
		//Exibe um paciente//			
		case 5:
			if(lista.mostrar_paciente() ==1){
				cout<<"informações do usuário"<<endl;
				break;
			}
			else{
				cout<<"Paciente não encontrado!"<<endl;
				break;
			}
		
		//Exibe todos os pacientes atendidos//	
		case 6:	
			if(lista.paciente_atendidos() ==1){
				cout<<"informações dos pacientes"<<endl;
				break;
				
			}
			
			else{
				cout<<"Não há pacientes no relatório"<<endl;
				break;
			}
			
		
		
		
		
		
		
	}
system ("pause"); 
 }	
	
return 0;	
}