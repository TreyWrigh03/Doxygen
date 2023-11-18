/**
 * @file Officer.h
 * @author Daniel Wright
 * @date 2023-11-17
 * @brief cpp class used for declaring variables
 * 
 * declaring variables used in ccp 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness; // evil things
 public:
  void print(); // used to print function
  double calculatePay(); // calculating par function variable
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
}; // officer declaration for function

#endif //OFFICER_H
