/*Discente: Joao Mateus Alves Felinto
 Matricula:121210342
 Per�odo: 21.1
 Curso: Engenharia El�trica
 Disciplina: T�cnicas de Programa��o
 Turma: 01
 Professor: Marcus Salerno
 Unidade 7: LVP-09
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <vector>
#include <fstream>

using namespace std;
#include "veiculo.cpp"
#include "caminhao.cpp"
#include "marca.cpp"
#include "consu.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	Concessionaria UFCG;
	vehicle veicu;
	trunk caminhaum;
	car carrum;
	int info,password, ano, capac;
	double preco;
	string name, user, marca, modelo, chassi;	
	
	ofstream arquivocarro;
	arquivocarro.open("save_carro.txt");
	
	if(!arquivocarro){
		cout<<"N�o foi possivel executar o arquivo"<<endl;
		return(13);
	}
	arquivocarro.close();
	ofstream arquivocaminhao;
	arquivocaminhao.open("save_caminhao.txt");
	
	if(!arquivocaminhao){
		cout<<"N�o foi possivel executar o arquivo"<<endl;
		return(13);
	}
	arquivocaminhao.close();
	
	
	while(true){
		system("cls");
		cout<<"\n ###.- Concessionaria UFCG -.### \n"<<endl;
		cout<<"#############Login############## \n escolha sua op��o:"<<endl;
		cout<<"\n 1- Novo cadastro \n 2- Fazer Login \n 0-Encerrar Programa"<<endl;
		cout<<"Informe sua op��o: "<<endl;
		cin>>info;
		if(info==0){
			break;
		}
		system("cls");
		
		
		switch(info){
			case 1:
				cout<<"#####Cadastramento#####"<<endl;
				cout<<"Informe seu nome: "<<endl;
				cin.ignore();
				getline(cin,name);
				cout<<"Informe seu usuario: "<<endl;
				cin>>user;
				cout<<"Informe sua senha: "<<endl;
				cin>>password;
				UFCG.setpassword(password);
				UFCG.setuser(user);
				break;
			case 2:
				cout<<"#####Login##### \n"<<endl;
				cout<<"Informe o usuario: "<<endl;
				cin>>user;
				cout<<"Informe a senha: "<<endl;
				cin>>password;
				if(UFCG.login(user,password) == 1){
					cout<<"\n BEM VINDO \n \n"<<endl;
					system("pause");
				
		
		while(true){
		system("cls");
		
		cout <<"\n ###.- Concessionaria UFCG -.### \n";
		
		cout<<"\n \n1-Cadastrar carro.\n"<<"2-Cadastrar caminh�o.\n"<<"3-Vender carro.\n"<<"4-Vender Caminh�o.\n"<<"5-Listar Carros.\n"<<"6-Listar Caminh�es.\n"<<"0-Encerrar.\n"<<endl;
		
		cout<<"\n \n Digite a op��o que deseja executar: "<<endl;
		cin>>info;
		
		if(info==0){
			break;
		}
		system("cls");
		
		switch(info){
			case 1:
			
				cout<<"\n ###Cadastro de Carro### \n";
				
				cout<<"\n \n 1- Sedan \n 2- SUV \n 3- Picape \n 4- Crossover."<<endl;
				cout<<"Informe o tipo do carro: "<<endl;
				cin >> marca;
				cout<<"Informe o Modelo do carro: "<<endl;
				cin.ignore();
				getline(cin,modelo);
				cout<<"Informe o n�mero do chassi: "<<endl;
				getline(cin,chassi);
				cout<<"Informe o ano de fabrica��o: "<<endl;
				cin >> ano;
				cout<<"Informe o pre�o do carro; "<<endl;
				cin >> preco;
				carrum.setbrand_car(marca);
				carrum.setmodel_car(modelo);
				carrum.setnumber_chassi(chassi);
				carrum.setyear_of_manufacture(ano);
				carrum.setprice(preco);
	   			if(UFCG.register_car(carrum,chassi)==1){
	   				cout<<"Cadastrado com �xito!"<<endl;
	   				system ("pause");
				   }
				else{
					cout<<"Erro no cadastro!!"<<endl;
					system ("pause");

				}
				break;
		
			case 2:	
				cout<<"\n ###Cadastro de Caminh�o### \n";
				cout<<"\n 1- Toco \n 2-Truck \n 3-Carreta Simples \n 4-Carreta Eixo Estendido"<<endl;
				cout<<"Informe o tipo do caminh�o: "<<endl;
				cin>>marca;
				cout<<"Informe o Modelo do caminh�o: "<<endl;
				getline(cin,modelo);
				cout<<"Informe o n�mero do chassi: "<<endl;
				getline(cin,chassi);
				cout<<"Informe o ano de fabrica��o: "<<endl;
				cin >> ano;
				cout<<"Informe o pre�o do caminh�o; "<<endl;
				cin >> preco;
				cout<<"Informe a sua capacidade(em Ton): "<<endl;
				cin>>capac;
				caminhaum.setbrand_trunk(marca);
				caminhaum.setmodel_trunk(modelo);
				caminhaum.setnumber_chassi(chassi);
				caminhaum.setyear_of_manufacture(ano);
				caminhaum.setprice(preco);
				caminhaum.setcapacity(capac);
	   			if(UFCG.register_trunk(caminhaum,chassi)==1){
	   				cout<<"Cadastrado com �xito!"<<endl;
				   }
				else{
					cout<<"Erro no cadastro!!"<<endl;
				}
				break;
				
			
			case 3:
				cout<<"\n ###Menu de Vendas### \n"<<endl;
				if(UFCG.selling_car() == 1){
				cout<<"Carro vendido com �xito!"<<endl;
				
					}
				else{
					cout<<"Erro ao vender o carro!"<<endl;
					
					}
				break;	
			
			
			case 4:
			
				cout<<"\n ###Menu de Vendas### \n"<<endl;
				if(UFCG.selling_trunk() == 1){
				cout<<"Caminh�o vendido com �xito!"<<endl;
				
					}
				else{
					cout<<"Erro ao vender o carro!"<<endl;
					
					}
				break;
						
			
			case 5:
				if(UFCG.display_cars()==1){
				cout<<"Lista de  carros"<<endl;
				
				
			}
			
			else{
				cout<<"N�o h� carros no estoque!"<<endl;
				
			}
			break;
			case 6:
				if(UFCG.display_trunks() ==1){
				cout<<"Lista dos caminh�es"<<endl;
				
				
			}
			
			else{
				cout<<"N�o h� carros no estoque!"<<endl;
				
			}
			break;	
				
				
		
		default:
		cout<<"Op��o Inv�lida tente novamente!"<<endl;
		
			
				
				
				
		}
		system("pause");
	   	}
				}
		else{
		cout<<"Erro ao cadastrar o funcionario!!"<<endl;
	}break;
	default:
	cout<<"Erro, tente novamente!!!"<<endl;
	break;
}
system("pause");
}
}

