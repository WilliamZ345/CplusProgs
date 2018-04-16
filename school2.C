#include <iostream>

using namespace std;

class School {

   public:
      string name; 
      int id;
      int phone;
      int zip;

   void display()
   {
      cout << "school name: "<< name <<endl;     
      cout << "school id: "<< id <<endl;     
      cout << "school phone: "<< phone <<endl;     
      cout << "school zip: "<< zip <<endl;     
   }
   
   void input()
   {
      cout << "input name: " << endl;
      cin >> name;
      cout << "input id: " << endl;
      cin >> id;
      cout << "input phone: " << endl;
      cin >> phone;
      cout << "input zip: " << endl;
      cin >> zip;
   }

};


#define SIZE 10
int main()
{
   School S[SIZE];
   for (int i=0; i<SIZE; i++)
   {
      S[i].input();
   }
   for (int i=0; i<SIZE; i++)
   {
      S[i].display(); 
   }
}
