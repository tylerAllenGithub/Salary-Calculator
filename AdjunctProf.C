#ifndef ADJUNCT_PROF_C
#define ADJUNCT_PROF_C

#include <iostream>
using namespace std;

#include "AdjunctProf.h"

  AdjunctProf::AdjunctProf()
  {
    degree=' ';
    NoOfTA=0;
    NoOfCourses=0;
  }
  AdjunctProf::AdjunctProf(char d, int ta, int courses)
  {
    degree=d;
    NoOfTA=ta;
    NoOfCourses=courses;
  }
void AdjunctProf::print() const
{
  cout<<"The name is "<<getProfessorName()<<endl;
  cout<<"The email is "<<getEmail()<<endl;
  cout<<"The Faculty ID is "<<getFacultyID()<<endl;

  switch(degree)
    {
    case 'b':
    case 'B': cout<<"They have a Bachelor's Degree"<<endl;
      break;
    case 'm':
    case 'M': cout<<"They have a Master's Degree"<<endl;
      break;
    case 'p':
    case 'P': cout<<"They have a PhD"<<endl;
      break;
    default:
      cout<<"Current Degree could not be determined"<<endl;
    }
  cout<<"The number of Teacher Assistants are "<<NoOfTA<<endl;
  cout<<"The number of Courses are "<<NoOfCourses<<endl;
}

void AdjunctProf::setDegree(char d)
{
  degree=d;
}

char AdjunctProf::getDegree()
{
  return degree;
}

void AdjunctProf::setNoOfTA(int num)
{
  NoOfTA=num;
}

int AdjunctProf::getNoOfTA()
{
  return NoOfTA;
}

void AdjunctProf::setNoOfCourses(int num)
{
  NoOfCourses=num;
}

int AdjunctProf::getNoOfCourses()
{
  return NoOfCourses;
}

float AdjunctProf::findSalary() const
{
  if(degree=='B'||degree=='b')
    return ((NoOfTA*1500)+(NoOfCourses*3000));
  else if(degree=='M'||degree=='m')
    return ((NoOfTA*2000)+(NoOfCourses*4000));
  else if(degree=='P'||degree=='p')
    return ((NoOfTA*2500)+(NoOfCourses*5000));
   
   return 0;
}

#endif
