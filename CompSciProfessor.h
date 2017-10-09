#ifndef COMP_SCI_PROFESSOR_H
#define COMP_SCI_PROFESSOR_H
#include <iostream>
#include <string>
using namespace std;
class CompSciProfessor
{
 private:
  string professorName;
  string email;
  long facultyID;
 public:
  CompSciProfessor();
  CompSciProfessor(string profName, string e, long id);
  void setProfessorName(string p);
  string getProfessorName() const;
  void setEmail(string e);
  string getEmail() const;
  void setFacultyID(long id);
  long getFacultyID() const;
};
#endif
