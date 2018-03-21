#include <string>

#include "Atom.hpp"


const std::string OxygenAtom::defaultLabel = "O";
const std::string OxygenAtom::defaultColor = "#ff0000";
const double OxygenAtom::defaultRadius = 0.75;
const int OxygenAtom::atomicNumber = 8;

std::string OxygenAtom::getLabel() const{
  return defaultLabel;
}

std::string OxygenAtom::getColor() const{
  return defaultColor;
}

double OxygenAtom::getRadius() const{
  return defaultRadius;
}

int OxygenAtom::getAtomicNumber() const{
  return atomicNumber;
}


const std::string HydrogenAtom::defaultLabel = "H";
const std::string HydrogenAtom::defaultColor = "#efefef";
const double HydrogenAtom::defaultRadius = 0.25;
const int HydrogenAtom::atomicNumber = 1;

std::string HydrogenAtom::getLabel() const{
  return defaultLabel;
}

std::string HydrogenAtom::getColor() const{
  return defaultColor;
}

double HydrogenAtom::getRadius() const{
  return defaultRadius;
}

int HydrogenAtom::getAtomicNumber() const{
  return atomicNumber;
}


WastefulOxygenAtom::WastefulOxygenAtom()
  : defaultLabel("O")
  , defaultColor("#ff0000")
  , defaultRadius(0.75)
  , atomicNumber(8)
{}

std::string WastefulOxygenAtom::getLabel() const{
  return defaultLabel;
}

std::string WastefulOxygenAtom::getColor() const{
  return defaultColor;
}

double WastefulOxygenAtom::getRadius() const{
  return defaultRadius;
}

int WastefulOxygenAtom::getAtomicNumber() const{
  return atomicNumber;
}

