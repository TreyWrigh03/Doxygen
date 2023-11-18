/**
 * @file Supervisor.h
 * @author Daniel Wright
 * @date 2023-11-17
 * @brief declaring variables
 * 
 * declaring variable for the Supervisor class to be used in .h
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print(); // print function
  double calculatePay(); // used to calculate pay
  Supervisor(); 
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
}; // supervisor function that takes in all the variables 

#endif //SUPERVISOR_H
