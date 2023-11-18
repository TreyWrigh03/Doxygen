/**
 * @file Supervisor.cpp
 * @author Daniel Wright
 * @date 2023-11-17
 * @brief cpp for supervisor class
 * 
 * uses the variables declared in .h to make functions to be used in main 
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
