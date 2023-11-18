/**
 * @file Employee.h
 * @author Daniel Wright
 * @date 2023-11-17
 * @brief Declaring variables and function
 * 
 * declaration of functiong and variables used in main and .cpp
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years; // employee years
  
 protected:
  double hourlyRate; // employee hours 
  float hoursWorked; // employee hours worked
 public:
  virtual void print(); // function declaration for printing
  virtual double calculatePay(); // function for calculating pa y
  void anniversary(); // employee aniverray function declaration used to calculate employee aniverarys
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
