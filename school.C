#include <iostream>

using namespace std;

class School {

   public:
      int id;
      int phone;
      int zip;

   void display()
   {
      cout << "school id: "<< id <<endl;     
      cout << "school phone: "<< phone <<endl;     
      cout << "school zip: "<< zip <<endl;     
   }
   
   void input()
   {
      cout << "input id: " << endl;
      cin >> id;
      cout << "input phone: " << endl;
      cin >> phone;
      cout << "input zip: " << endl;
      cin >> zip;
   }

};

int main()
{
   School Findley;
   School Rocket;
   School Balloon;

   cout << "please input for Findley: " <<endl;
   Findley.input();
   cout << "please input for Rocket: " <<endl;
   Rocket.input();
   cout << "please input for Balloon: " <<endl;
   Balloon.input();

   cout << "School information: "<< endl;
   Findley.display();
   Rocket.display();
   Balloon.display();
}
