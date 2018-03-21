#include <iostream>
#include <vector>

#include "Atom.hpp"
#include "Property.hpp"
#include "Factory.hpp"


int main(){
  const int n = 10;
  const int m = 5;
  // const int n = 50000000;
  // const int m = 1000;

  std::vector<Atom*> atoms;
  Atom* tmp;

  AtomFactory factory;

  for (int i=0; i<n; ++i){
    if (true){
      if (i%2==0){
        tmp = factory.makeAtom("O");
      }else{
        tmp = factory.makeAtom("H");
      }
      if (i%m==0){
        tmp->setLabel(tmp->getLabel()+"x");
        tmp->setColor("#00ff00");
        tmp->setRadius(tmp->getRadius()+0.05);
      }
      atoms.push_back(tmp);
    }else{
      atoms.push_back(new WastefulOxygenAtom());
    }
  }

  for (int i=0; i<n; ++i){
    std::cout << atoms[i]->getAtomicNumber() << "  "
              << atoms[i]->getLabel() << "  " 
              << atoms[i]->getColor() << "  "
              << atoms[i]->getRadius() << std::endl;
  }

  return 0;
}
