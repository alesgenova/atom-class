#include <iostream>
#include <vector>

#include "Atom.hpp"
#include "Property.hpp"


int main(){
  const int n = 10;
  const int m = 5;
  // const int n = 50000000;
  // const int m = 1000;

  std::vector<Atom*> atoms;
  Atom* tmp;

  for (int i=0; i<n; ++i){
    if (true){
      if (i%2==0){
        atoms.push_back(new OxygenAtom());
      }else{
        atoms.push_back(new HydrogenAtom());
      }
      if (i%m==0){
        tmp = atoms[i];
        tmp = new LabelDecorator(tmp, tmp->getLabel()+"x");
        tmp = new ColorDecorator(tmp, "#00ff00");
        tmp = new RadiusDecorator(tmp, tmp->getRadius()+0.05);
        atoms[i] = tmp;
      }
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
