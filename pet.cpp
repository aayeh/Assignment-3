#include "pets.h"

//default constuctor
pet::pet()
{
  name = "null";
  age = 0;
  type = "null";
  weight = 0;
}
//overloaded constuctor
pet::pet(string m_name, int m_age, string m_type, double m_weight)
{
  name = m_name;
  age = m_age;
  type = m_type;
  weight = m_weight;
}

//all of my getters
string pet::getName()
{
  return name;
}
int pet::getAge()
{
  return age;
}
string pet::getType()
{
  return type;
}
double pet::getWeight()
{
  return weight;
}

//all of my setters
void pet::setName(string m_name)
{
  name = m_name;
}
void pet::setAge(int m_age)
{
  age = m_age;
}
void pet::setType(string m_type)
{
  type = m_type;
}
void pet::setWeight(double m_weight)
{
  weight = m_weight;
}

//output function
void pet::output()
{
  cout << "The " << type << "'s name: " << name << endl;
  cout << "\t  Age: " << age << endl;
  cout << "\t  Weight: " << weight << endl;
}
