#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#include <string>

#include "Atom.hpp"

class PropertyDecorator : public Atom {
  public:
    PropertyDecorator(Atom *);
    virtual std::string getLabel() const;
    virtual std::string getColor() const;
    virtual double getRadius() const;
    virtual int getAtomicNumber() const;
  protected:
    Atom *wrappedAtom;
};

class LabelDecorator : public PropertyDecorator {
  public:
    LabelDecorator(Atom *, std::string);
    virtual std::string getLabel() const;
  private:
    const std::string label;
};

class ColorDecorator : public PropertyDecorator {
  public:
    ColorDecorator(Atom *, std::string);
    virtual std::string getColor() const;
  private:
    const std::string color;
};

class RadiusDecorator : public PropertyDecorator {
  public:
    RadiusDecorator(Atom *, double);
    virtual double getRadius() const;
  private:
    const double radius;
};


#endif
