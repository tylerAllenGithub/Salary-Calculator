#ifndef TENURE_TRACK_PROF_C
#define TENURE_TRACK_PROF_C

#include <iostream>
using namespace std;

#include "TenureTrackProf.h"


TenureTrackProf::TenureTrackProf()
{
  rank=' ';
  YearOfExp=0;
}

TenureTrackProf::TenureTrackProf(char r, int year)
{
  rank=r;
  YearOfExp=year;
}

void TenureTrackProf::print() const
{ 
  cout<<"The name is "<<getProfessorName()<<endl;
  cout<<"The email is "<<getEmail()<<endl;
  cout<<"The Faculty ID is "<<getFacultyID()<<endl;

  switch(rank)
    {
    case 'a':
    case 'A': cout<<"Current rank is Assistant Professor"<<endl;
      break;
    case 's':
    case 'S': cout<<"Current rank is Associate Professor"<<endl;
      break;
    case 'f':
    case 'F': cout<<"Current rank is Full Professor"<<endl;
      break;
    default:
      cout<<"Current rank could not be determined"<<endl;
    }
  cout<<"Years of Experience are "<<YearOfExp<<endl;
}

float TenureTrackProf::findSalary() const
{
  if(rank=='A'||rank=='a')
    return (65000+(1500*YearOfExp));
  else if(rank=='S'||rank=='s')
    return (80000+(1500*YearOfExp));
  else if(rank=='F'||rank=='f')
    return (90000+(1500*YearOfExp));
	    return 0;
}

void TenureTrackProf::setRank(char c)
{
  rank=c;
}

char TenureTrackProf::getRank() const
{
  return rank;
}

void TenureTrackProf::setYearOfExp(int num)
{
  YearOfExp=num;
}

int TenureTrackProf::getYearOfExp() const
{
  return YearOfExp;
}
#endif
