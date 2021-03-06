#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
		double calcula(){
	
			double x = peso * custoKg;
	
			return x;
		}
	
		void print(){
	
			Encomenda::print();
			cout << "[Encomenda Normal]" << endl;
			cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Custo total: " << total << endl;
	
		}

};

#endif
