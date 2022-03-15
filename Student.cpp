#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;


// Assign studentId and name
void Student::assignDetails(int id,char Sname[]) {
  studentId=id;
  strcpy(name,Sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Studnet Id:"<<studentId<<endl;
  cout<<"Studnet Name:"<<name<<endl;
}
