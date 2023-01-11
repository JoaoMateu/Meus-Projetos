#ifndef CONSU_H
#define CONSU_H

/* Determinando uma classe para as informações da concessionaria */

class Concessionaria{
	vector < car > sell_car;
	vector < trunk > sell_trunk;
	string user;
	int password;
	string name;
	
	public:
		Concessionaria();
		~Concessionaria();
		void setuser(string);
		void setpassword(int);
		void setname(string);
		void save_arqui();
		
		string getname();
		string getuser();
		int getpassword();
		
		
/* estabelecendo funções */
		bool login(string,int); //Autenticador de Login//
		bool register_car(car,string);	
		bool register_trunk(trunk,string);
		bool selling_car();
		bool selling_trunk();
		bool display_cars();
		bool display_trunks();
		
	
		
};
#endif