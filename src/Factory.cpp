#include "Atom.hpp"
#include "Factory.hpp"

Atom * AtomFactory::makeAtom(std::string label){
  Atom *atom = nullptr;
  if (label=="O"){
    atom = new OxygenAtom();
    atom = new PropertyDecorator(atom);
  }else if (label=="H"){
    atom = new HydrogenAtom();
    atom = new PropertyDecorator(atom);
  }
  return atom;
}
