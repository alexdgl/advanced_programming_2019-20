#include <iostream>
#include <locale>

void get_int();
void get_double();

int main(){
	
	int  par;
	
	std::cout << "digita 1 per inserire valori interi.\n";
	std::cout << "digita 2 per inserire valori double.\n";
	std::cin >>  par;
	
	switch(par){
			case 1:
					get_int();
					break;
			case 2:
					get_double();
					break;
			default:
					std::cout << "hai inserito un parametro non valido.\n";
					break;
	}
	return 0;
}

void get_int(){
	
	int j=0;
	int check=0;
	std::string  i;
	std::locale loc;
	std::cout << "inserisci numeri.\n";
	
	std::cin.clear();
	std::cin.ignore();
    
	while(std::cin >> i){
			
			j = check = 0;
			while(j< i.length()){
					if(!std::isdigit(i[j], loc)){
								check = 1;
								break;
					}
					j++;
			}
			
			if(check==0){
					std::cout << "Hai inserito un numero intero.\n";
			}else {
					std::cout<< "Errore! Il valore non è intero.\n";
					std::cin.clear();
					std::cin.ignore();
			}
	}
}

void get_double(){
	
	int j=0;
	int check_char=0;
	bool check_dot=false;
	std::string  i;
	std::locale loc;
	std::cout << "inserisci numeri.\n";
	
	std::cin.clear();
	std::cin.ignore();
    
	while(std::cin >> i){
			
			j = check_char = 0;
			check_dot=false;
			while(j< i.length()){
					if(!std::isdigit(i[j], loc)){
								if(i[j]!='.'){
										check_char = 1;
										break;
								}else if (check_dot == false){
										check_dot = true;
								}else{
										check_char = 1;
										break;
								}
					}
					j++;
			}
			
			if(check_char==0 and check_dot==true){
					std::cout << "Hai inserito un numero double.\n";
			}else {
					std::cout<< "Errore! Il valore non è double.\n";
					std::cin.clear();
					std::cin.ignore();
			}
	}
}