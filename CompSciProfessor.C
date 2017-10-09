#ifndef COMP_SCI_PROFESSOR_C
#define COMP_SCI_PROFESSOR_C
#include <iostream>
#include <string>
using namespace std;

#include "CompSciProfessor.h"

CompSciProfessor::CompSciProfessor()
{
  professorName="";
  email="";
  facultyID=0;
}
CompSciProfessor::CompSciProfessor(string profName, string e, long id)
{
  professorName=profName;
  email=e;
  facultyID=id;
}
void CompSciProfessor::setProfessorName(string p)
{
  professorName=p;
}
string CompSciProfessor::getProfessorName() const
{
  return professorName;
}
void CompSciProfessor::setEmail(string e)
{
  email=e;
}
string CompSciProfessor::getEmail() const
{
  return email;
}
void CompSciProfessor::setFacultyID(long id)
{
  facultyID=id;
}
long CompSciProfessor::getFacultyID() const
{
  return facultyID;
}
#endif
