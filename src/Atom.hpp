#ifndef ATOM_HPP
#define ATOM_HPP

#include <string>

class Atom {
  public:
    virtual std::string getLabel() const = 0;
    virtual std::string getColor() const = 0;
    virtual double getRadius() const = 0;
    virtual int getAtomicNumber() const = 0;
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
    virtual std::string getColor() const;
    virtual double getRadius() const;
    virtual int getAtomicNumber() const;
  private:
    const std::string defaultLabel;
    const std::string defaultColor;
    const double defaultRadius;
    const int atomicNumber;
};

#endif
