#include <iostream>
#include <string>
using namespace std;

struct Employee {
   int empID;
   string name;
   int age;
   float salary;
};

 

int addEmployee(Employee emp[], int numEmployees) {

   // Implement the logic to add a new employee

   // ...
   emp[numEmployees].empID = ++numEmployees;
   cin>> emp[numEmployees].name;
   cin>> emp[numEmployees].age;
   cin>> emp[numEmployees].salary;

   return numEmployees;

}

 

// Function to display details of a specific employee

void displayEmployeeDetails(const Employee emp[], int numEmployees, int empID) {

   // Implement the logic to display details of a specific employee

   // ...
    //if(emp[i].empID == empID){
      //   cout<< emp[i].name;
      //   cout<< emp[i].age;
      //   cout<< emp[i].salary;
    }
   //  else{
      //   cout<<"Error fetching details";
   //  }
// }

 

// Function to display details of all employees

void displayAllEmployees(const Employee emp[], int numEmployees) {

   // Implement the logic to display details of all employees

   // ...

}

 

// Function to update the salary of a specific employee

void updateSalary(Employee emp[], int numEmployees, int empID, float newSalary) {

   // Implement the logic to update the salary of a specific employee

   // ...

}

 

int main() {

   // Initialize variables and structures

   const int maxEmployees = 100;

   Employee employees[maxEmployees];

   int numEmployees = 0;

 

   // Implement the menu-driven program to interact with the user

   // ...


   numEmployees = addEmployee(employees,numEmployees);
   displayEmployeeDetails(employees,numEmployees,1);

 

   return 0;

}