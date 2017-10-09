#ifndef TENURE_TRACK_PROF_H
#define TENURE_TRACK_PROF_H

#include "CompSciProfessor.h"

class TenureTrackProf: public CompSciProfessor
{
 private:
  char rank;
  int YearOfExp;
 public:
  TenureTrackProf();
  TenureTrackProf(char r, int year);
  void print() const;
  float findSalary() const;
  void setRank(char c);
  char getRank() const;
  void setYearOfExp(int num);
  int getYearOfExp() const;
};
#endif

