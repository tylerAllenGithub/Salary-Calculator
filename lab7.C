#include <iostream>
using namespace std;

#include "CompSciProfessor.h"
#include "AdjunctProf.h"
#include "TenureTrackProf.h"

int main()
{
  AdjunctProf a;
  a.setProfessorName("Adam Smith");
  a.setEmail("asmith@csusm.edu");
  a.setFacultyID(12345);
  a.setDegree('M');
  a.setNoOfTA(2);
  a.setNoOfCourses(1);
  a.print();
  cout<<"Salary: $"<<a.findSalary()<<endl;

  cout<<endl;

  TenureTrackProf t;
  t.setProfessorName("Jim Anderson");
  t.setFacultyID(54321);
  t.setEmail("janderson@csusm.edu");
  t.setYearOfExp(8);
  t.setRank('S');
  t.print();
  cout<<"Salary: $"<<t.findSalary()<<endl;
}
