#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#include <string>

#include "Atom.hpp"

class PropertyDecorator : public Atom {
  public:
    PropertyDecorator(Atom *);
    virtual std::string getLabel() const;
    virtual void setLabel(std::string);
    virtual std::string getColor() const;
    virtual void setColor(std::string);
    virtual double getRadius() const;
    virtual void setRadius(double);
    virtual int getAtomicNumber() const;
    virtual bool _hasSetLabel(std::string);
    virtual bool _hasSetColor(std::string);
    virtual bool _hasSetRadius(double);
  protected:
    Atom *wrappedAtom;
};

class LabelDecorator : public PropertyDecorator {
  public:
    LabelDecorator(Atom *, std::string);
    virtual std::string getLabel() const;
    virtual bool _hasSetLabel(std::string);
  private:
    std::string label;
};

class ColorDecorator : public PropertyDecorator {
  public:
    ColorDecorator(Atom *, std::string);
    virtual std::string getColor() const;
    virtual bool _hasSetColor(std::string);
  private:
    std::string color;
};

class RadiusDecorator : public PropertyDecorator {
  public:
    RadiusDecorator(Atom *, double);
    virtual double getRadius() const;
    virtual bool _hasSetRadius(double);
  private:
    double radius;
};


#endif
