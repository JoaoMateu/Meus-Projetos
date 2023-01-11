# ifndef HOSPITAL_H
# define HOSPITAL_H

//criando um vetor que irá armazenar as informações do hospital dentro da classe hospital// 
class hospital{
	vector < paciente > Fila_de_espera;
	vector < paciente > Lista_de_atendimento;
	
	
	public:
		hospital();
		~hospital();
		bool add_paciente(paciente,unsigned);
		bool atendimento_paciente();
		bool remover_paciente();
		bool mostrar_fila();
		bool mostrar_paciente();
		bool paciente_atendidos();
	
};
#endif