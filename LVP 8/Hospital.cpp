#include "Hospital.h"

hospital::hospital(){
	
}

hospital::~hospital(){
	cout<<"Encerrando o Sistema..."<<endl;
}
//adicionamento de paciente//
bool hospital::add_paciente(paciente novo, unsigned registro){
    for(unsigned i = 0; i < Fila_de_espera.size(); i++){
        if(Fila_de_espera.size() != 0 and Fila_de_espera[i].getregistro() == registro){ 
            return false;
        }
    }
    Fila_de_espera.push_back(novo);
    return true;
}

//atendimento/
bool hospital::atendimento_paciente(){
	if (Fila_de_espera.size() ==0){
		return false;
	}
	Lista_de_atendimento.push_back(Fila_de_espera[0]);
	Fila_de_espera.erase(Fila_de_espera.begin());
	return true;
}

//remover da lista de atendimento//
bool hospital::remover_paciente(){
	int remove;
	cout<<"Qual Paciente deseja tirar da fila de atendimento?: "<<endl;
	cin>>remove;
    for(unsigned i = 0; i < Fila_de_espera.size(); i++){
        if(Fila_de_espera.size() != 0 and Fila_de_espera[i].getregistro() == remove){ 
            Fila_de_espera.erase(Fila_de_espera.begin()+i);
            return true;
        }
    }
	
	return false;
	
}

//exibir a lista de atendimento//
bool hospital::mostrar_fila(){
	cout<<"######################################"<<endl;
	cout<<"       Lista de atendimento           "<<endl;
	cout<<"######################################"<<endl;
	cout<<"Nome:"<<"\t\t"<<"N°:"<<"\t\t"<<"Motivo:"<<endl;
	if (Fila_de_espera.size() ==0){
		return false;
	}
	else{
		for(unsigned i = 0; i < Fila_de_espera.size(); i++){
			cout<< Fila_de_espera[i].getnome()<<"\t\t"<<Fila_de_espera[i].getregistro()<<"\t\t"<<Fila_de_espera[i].getmotivo()<<endl;
		}
	}
	return true;
}


//exibe apenas dados de um paciente//
bool hospital::mostrar_paciente(){
	int regis;
	cout<<"Informe o N° registro para abrir o perfil"<<endl;
	cin>>regis;
	system("cls");
	cout<<"######################################"<<endl;
	cout<<"        Perfil do Paciente            "<<endl;
	cout<<"######################################"<<endl;
	cout<<"Nome:"<<"\t\t"<<"N°:"<<"\t\t"<<"Motivo:"<<endl;
	for(unsigned i = 0; i < Fila_de_espera.size(); i++){
		if(Fila_de_espera.size() != 0 and Fila_de_espera[i].getregistro() == regis){
		cout<< Fila_de_espera[i].getnome()<<"\t\t"<<Fila_de_espera[i].getregistro()<<"\t\t"<<Fila_de_espera[i].getmotivo()<<endl;
		return true;	
		}
		}
	for(unsigned i = 0; i < Lista_de_atendimento.size(); i++){
		if(Lista_de_atendimento.size() != 0 and Lista_de_atendimento[i].getregistro() == regis){
		cout<< Lista_de_atendimento[i].getnome()<<"\t\t"<<Lista_de_atendimento[i].getregistro()<<"\t\t"<<Lista_de_atendimento[i].getmotivo()<<endl;
		return true;		
		}
	}
}
//Exibe todos os pacientes atendidos//
bool hospital::paciente_atendidos(){
	cout<<"######################################"<<endl;
	cout<<"       Lista de Atendidos           "<<endl;
	cout<<"######################################"<<endl;
	cout<<"Nome:"<<"\t\t"<<"N°:"<<"\t\t"<<"Motivo:"<<endl;
	if (Lista_de_atendimento.size() ==0){
		return false;
	}
	else{
		for(unsigned i = 0; i < Lista_de_atendimento.size(); i++){
			cout<< Lista_de_atendimento[i].getnome()<<"\t\t"<<Lista_de_atendimento[i].getregistro()<<"\t\t"<<Lista_de_atendimento[i].getmotivo()<<endl;
		}
	}
	return true;
}


//Lorenzo se for vc que está corrigindo alivia ai  ou  banho no laguinho vai ganhar//