

#ifndef EmployeeList_H
#define EmployeeList_H


#include "List.h"
#include "../Person-Class-Hierarchy/Person.h"
#include "../Person-Class-Hierarchy/Employee.h"
#include "../Person-Class-Hierarchy/Manager.h"
#include "../Person-Class-Hierarchy/Customer.h"
#include <fstream>


class EmployeeList : public List<Person*>{

public:
   EmployeeList();
   EmployeeList( string name, string databasePath);
   virtual ~EmployeeList();

   void BuildFromDatabase();
   void SetDatabasePath( string path );
   string GetDatabasePath() const;
   Person* Search( int employeeID );
   virtual void RemoveFromList( Person* person );
   virtual void DisplayList();

private:
   string DatabasePath;
   void ManagerType(managerType& managerLevel, string identifier);
};

#endif