#include <iostream>
using namespace std;

int main()
{
   int a;
   int b = 5;
 
   for (a=0; ; a++)
   {
      if (a = b)
      {
         cout << "Value b has been reached. Stopping program.." << endl;
         cout << "Values are: " << a << " and "<< b << endl;
         return 0;
      }
      else
      {
         cout << "Error. Please try again." << endl;
         return 0; 
      }
   }
}      
