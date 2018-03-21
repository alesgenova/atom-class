#ifndef ATOM_HPP
#define ATOM_HPP

#include <string>

class Atom {
  public:
    virtual std::string getLabel() const = 0;
    virtual void setLabel(std::string);
    virtual std::string getColor() const = 0;
    virtual void setColor(std::string);
    virtual double getRadius() const = 0;
    virtual void setRadius(double);
    virtual int getAtomicNumber() const = 0;
    virtual bool _hasSetLabel(std::string);
    virtual bool _hasSetColor(std::string);
    virtual bool _hasSetRadius(double);
  protected:

};


class OxygenAtom : public Atom {
  public:
    virtual std::string getLabel() const;
    virtual std::string getColor() const;
    virtual double getRadius() const;
    virtual int getAtomicNumber() const;
  private:
    static const std::string defaultLabel;
    static const std::string defaultColor;
    static const double defaultRadius;
    static const int atomicNumber;
};

class HydrogenAtom : public Atom {
  public:
    virtual std::string getLabel() const;
    virtual std::string getColor() const;
    virtual double getRadius() const;
    virtual int getAtomicNumber() const;
  private:
    static const std::string defaultLabel;
    static const std::string defaultColor;
    static const double defaultRadius;
    static const int atomicNumber;
};

class WastefulOxygenAtom : public Atom {
  public:
    WastefulOxygenAtom();
    virtual std::string getLabel() const;
    virtual void setLabel(std::string);
    virtual std::string getColor() const;
    virtual void setColor(std::string);
    virtual double getRadius() const;
    virtual void setRadius(double);
    virtual int getAtomicNumber() const;
  private:
    std::string label;
    std::string color;
    double radius;
    const int atomicNumber;
};

#endif
