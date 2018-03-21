#include <string>

#include "Atom.hpp"
#include "Property.hpp"


PropertyDecorator::PropertyDecorator(Atom * atom_)
  : wrappedAtom(atom_)
{}

void PropertyDecorator::setLabel(std::string _label){
  if (wrappedAtom->_hasSetLabel(_label)){
    // nothing to to, the label has been set in an existing decorator
  }else{
    // wrap the wrappedAtom with a new decorator
    wrappedAtom = new LabelDecorator(wrappedAtom, _label);
  }
  return;
}

void PropertyDecorator::setColor(std::string _color){
  if (wrappedAtom->_hasSetColor(_color)){
  }else{
    wrappedAtom = new ColorDecorator(wrappedAtom, _color);
  }
  return;
}

void PropertyDecorator::setRadius(double _radius){
  if (wrappedAtom->_hasSetRadius(_radius)){
  }else{
    wrappedAtom = new RadiusDecorator(wrappedAtom, _radius);
  }
  return;
}

bool PropertyDecorator::_hasSetLabel(std::string _label){
  return wrappedAtom->_hasSetLabel(_label);
}

bool PropertyDecorator::_hasSetColor(std::string _color){
  return wrappedAtom->_hasSetColor(_color);
}

bool PropertyDecorator::_hasSetRadius(double _radius){
  return wrappedAtom->_hasSetRadius(_radius);
}

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

bool LabelDecorator::_hasSetLabel(std::string label_){
  label = label_;
  return true;
}

ColorDecorator::ColorDecorator(Atom * atom_, std::string color_)
  : PropertyDecorator(atom_)
  , color(color_)
{}

std::string ColorDecorator::getColor() const{
  return color;
}

bool ColorDecorator::_hasSetColor(std::string color_){
  color = color_;
  return true;
}

RadiusDecorator::RadiusDecorator(Atom * atom_, double radius_)
  : PropertyDecorator(atom_)
  , radius(radius_)
{}

double RadiusDecorator::getRadius() const{
  return radius;
}

bool RadiusDecorator::_hasSetRadius(double radius_){
  radius = radius_;
  return true;
}

