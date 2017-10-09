#ifndef ADJUNCT_PROF_H
#define ADJUNCT_PROF_H
#include "CompSciProfessor.h"

class AdjunctProf: public CompSciProfessor
{
 private:
  char degree;
  int NoOfTA;
  int NoOfCourses;
 public:
  AdjunctProf();
    AdjunctProf(char d, int ta, int courses);
  void print() const;
  float findSalary() const;
  void setDegree(char d);
  char getDegree();
  void setNoOfTA(int num);
  int getNoOfTA();
  void setNoOfCourses(int num);
  int getNoOfCourses();
};
#endif
