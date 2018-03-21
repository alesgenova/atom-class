#include <string>

#include "Atom.hpp"
#include "Property.hpp"


PropertyDecorator::PropertyDecorator(Atom * atom_)
  : wrappedAtom(atom_)
{}

std::string PropertyDecorator::getLabel() const{
  return wrappedAtom->getLabel();
}

std::string PropertyDecorator::getColor() const{
  return wrappedAtom->getColor();
}

double PropertyDecorator::getRadius() const{
  return wrappedAtom->getRadius();
}

int PropertyDecorator::getAtomicNumber() const{
  return wrappedAtom->getAtomicNumber();
}


LabelDecorator::LabelDecorator(Atom * atom_, std::string label_)
  : PropertyDecorator(atom_)
  , label(label_)
{}

std::string LabelDecorator::getLabel() const{
  return label;
}

ColorDecorator::ColorDecorator(Atom * atom_, std::string color_)
  : PropertyDecorator(atom_)
  , color(color_)
{}

std::string ColorDecorator::getColor() const{
  return color;
}

RadiusDecorator::RadiusDecorator(Atom * atom_, double radius_)
  : PropertyDecorator(atom_)
  , radius(radius_)
{}

double RadiusDecorator::getRadius() const{
  return radius;
}

