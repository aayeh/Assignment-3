#include <iostream>
#include <string>

using namespace std;

//using class pet
class pet
{
  //setting private variables
private:
  string name;
  int age;
  string type;
  double weight;
  //setting public variables
public:
  pet();
  pet(string m_name, int m_age, string m_type, double m_weight);

  string getName();
  int getAge();
  string getType();
  double getWeight();

  void setName(string m_name);
  void setAge(int m_age);
  void setType(string m_type);
  void setWeight(double m_weight);

  void output();
};
