#include "car.h"
#include "berline.h"


int main(){
  std::cout << "Visitor Design Pattern practice" << std::endl;
  Car voiture_perso;
  voiture_perso.setmodel("Renault");
  std::string marque_voiture_perso = voiture_perso.getmodel();
  std::cout << "La marque de ma voiture perso est "
	    << marque_voiture_perso
	    <<  "." << std::endl << std::endl;


  
  Berline voiture_voisin;
  voiture_voisin.setmodel("Peugeot");
  std::cout << "La marque de la voiture de mon voisin est "
	    << voiture_voisin.getmodel() << "." << std::endl
	    << "Son nombre de place est "
	    << voiture_voisin.getplace()
	    << "." << std::endl;

  return 0;
}
