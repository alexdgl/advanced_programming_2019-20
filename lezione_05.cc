#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <bits/stdc++.h> 
#include <string>
#include <fstream>
#include <cstring>

int main(){
	
	int limitatore {0};
	int i{0};
	int j{0};
	std::string linea_ingresso{};
	std::string linea_uscita{};
	std::string tmp{};
	std::fstream fd;
	
	std::cout << "Imposta il limitatore: ";
	std::cin >> limitatore;
	if(!std::isdigit(limitatore) and limitatore <=0){std::cout << "ERRORE: limitatore non valido.\n"; abort();}
	
	fd.open("./testo.txt", std::ios::in);	// apertura file in sola lettura
	
	while(std::getline(fd, linea_ingresso) or linea_uscita!=""){	// salviamo la riga
			std::cout << "--------------------\n";
			std::cout << "linea_uscita: " << linea_uscita << "\n";
			std::cout << "linea_ingresso: " << linea_ingresso << "\n";
			if(!linea_uscita.empty()){
				std::cout << "la stringa non è vuota!\n";
				for(j=0; j<linea_uscita.length()+linea_ingresso.length(); j++){
							if(j<linea_uscita.length()){
										tmp = tmp + linea_uscita[j];
							}else{
										tmp = tmp + linea_ingresso[i];
										i++;
							}
							std::cout << tmp << "\n";
				}
				// tmp = linea_uscita+linea_ingresso;
				// std::cout << tmp << "\n";
				//std::cout << "nuova_linea_ingresso: " << tmp << "\n";
				return 0;
			}	// sovrascriviamo riga considerando il pezzo della riga precedente (se siste)
			linea_uscita = {};
			std::cout << "nuova_linea_ingresso: " << linea_ingresso << "\n";
			std::cout << "dimensione linea_ingresso: " << linea_ingresso.length() << "\n";
			std::cout << "--------------------\n";
			if(linea_ingresso.length() <= limitatore){ // dimensione riga inferiore al limitatore -> stampa riga
						// std::cout << "linea_ingresso dentro il limitatore.\n";
						linea_uscita  = {};	// reset
						std::cout << linea_ingresso  << "\n";	//  print della riga
			}else{	// dimensione maggiore del limitatore -> varie operazioni in base al carattere in posizione del limitatore
						// std::cout << "linea_ingresso fuori il limitatore.\n";
						// std::cout << "linea_ingresso[limitatore]: " << linea_ingresso[limitatore] << "\n";
						if(std::ispunct(linea_ingresso[limitatore]) or
									std::isspace(linea_ingresso[limitatore])){	// nel caso punteggiatura o spazio...
											std::cout << linea_ingresso.substr(0, limitatore) << "\n"; // print riga fino al limitatore
											linea_uscita = linea_ingresso.substr(limitatore+1, linea_ingresso.length()  - limitatore );
											// salviamo porzione di riga dopo il limitatore (escluso \n) -> re-inserita nella riga successiva ad inizio while
											// std::cout << "linea_uscita: " <<  linea_uscita << "\n";
						}else{	// nel caso di carattere alfanumerico (ci troviamo in mezzo ad una parola!)...
											while(!std::ispunct(linea_ingresso[limitatore-i]) and
																 !std::isspace(linea_ingresso[limitatore-i])){	
																		// si cerca il primo carattere di punteggiaturo a di spazio,  a sinistra del limitatore (ossia l'inizio della parola)
																		// std::cout << "carattere sotto analisi: " << linea_ingresso[limitatore-i] << "\n";
																		i++;	// nel caso ancora non sia stato trovato...
																		// std::cout << "indice: " << i << "\n";
																		if(limitatore-i==0){	// siamo arrivati ad inizio riga!
																					i={-1}; // segnaliamo l'accaduto
																					break;
																		}
											}
											if(i==-1){	// gestiamo il caso in cui il delimitatore è sulla parola a inizio riga
														i = {0};
														while(!std::ispunct(linea_ingresso[limitatore+i]) and
																 !std::isspace(linea_ingresso[limitatore+i])){ 
																			// cerchiamo punteggiatura o spazio a destra della parola contenente la posizione del limitatore
																			i++;	// ci spostiamo a destra
														}
														std::cout << linea_ingresso.substr(0, limitatore+i+1) << "\n";	// print fino alla parola che include la posizione del limitatore (esclusa)
														linea_uscita = linea_ingresso.substr(limitatore+i+2, linea_ingresso.length()  - limitatore+i+2);
														// salviamo la porzione di riga a partire dalla parola che contiene la posizione del limitatore (escluso \n) -> re-inserita
														// std:: cout << "linea_uscita: " << linea_uscita << "\n";
														i = {0};	// reset
														// std::cout << "indice: " << i << "\n";
											}else{
														std::cout << linea_ingresso.substr(0, limitatore-i) << "\n";	// print fino alla parola che include la posizione del limitatore (esclusa)
														linea_uscita = linea_ingresso.substr(limitatore-(i-1), linea_ingresso.length()  - (limitatore-(i-1)));
														// salviamo la porzione di riga a partire dalla parola che contiene la posizione del limitatore (escluso \n) -> re-inserita
														// std:: cout << "linea_uscita: " << linea_uscita << "\n";
														i = {0};	// reset
														// std::cout << "indice: " << i << "\n";
											}
											
						}
			}
			linea_ingresso ={};
	}
	fd.close();
	return 0;
}