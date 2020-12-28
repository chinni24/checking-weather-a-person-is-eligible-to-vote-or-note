#include <iostream>
using namespace std;

int main()
{
  int age;
     cout << "Enter your age: ";
     cin >>age;
     
     if(age>=13 && age<=19)
     {
         cout << "Person is Teenager" << endl;
     }
     else
     {
          cout << "Person is not Teenager" << endl;
     }
     if(age>=18)
     {
          cout << "Person is Eligible to vote" << endl;
     }
     else
     {
          cout << "Person is not Eligible to vote" << endl;
     }
     return 0;
}
