#include <string>

#include "Atom.hpp"


void Atom::setLabel(std::string _label){
  return;
}

void Atom::setColor(std::string _color){
  return;
}

void Atom::setRadius(double _radius){
  return;
}

bool Atom::_hasSetLabel(std::string label_){
  return false;
}

bool Atom::_hasSetColor(std::string color_){
  return false;
}

bool Atom::_hasSetRadius(double radius_){
  return false;
}


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
  : label("O")
  , color("#ff0000")
  , radius(0.75)
  , atomicNumber(8)
{}

std::string WastefulOxygenAtom::getLabel() const{
  return label;
}

void WastefulOxygenAtom::setLabel(std::string _label){
  label = _label;
}

std::string WastefulOxygenAtom::getColor() const{
  return color;
}

void WastefulOxygenAtom::setColor(std::string _color){
  color = _color;
}

double WastefulOxygenAtom::getRadius() const{
  return radius;
}

void WastefulOxygenAtom::setRadius(double _radius){
  radius = _radius;
}

int WastefulOxygenAtom::getAtomicNumber() const{
  return atomicNumber;
}

