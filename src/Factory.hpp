#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <string>

#include "Atom.hpp"
#include "Property.hpp"

class AtomFactory {
  public:
    Atom * makeAtom(std::string label);
};

#endif
