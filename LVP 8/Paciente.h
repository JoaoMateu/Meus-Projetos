# ifndef PACIENTE_H
# define PACIENTE_H


//Classe Paciente com as informações de cadrasto//
class paciente{
	   string nome;
	   unsigned registro;
	   string motivo;
	   
	public:
		paciente();
		void setnome(string);
		void setregistro(int);
		void setmotivo(string);
		string getnome();
		int 	getregistro();
		string 	getmotivo();
					
};



#endif