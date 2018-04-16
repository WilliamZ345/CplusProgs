#include <iostream>
using namespace std;

int compare(int a, int b)
{
   if (a > b)
   {
      cout << a << " is larger than " << b << endl;
   }
   else
   {
      cout << "The second number is larger." <<endl; 
   }
}

int main()
{
   int a;
   int b;
  
   cout << "input value for a: " <<endl;
   cin >> a;
   cout << "input value for b: " <<endl;
   cin >> b; 
   compare (a, b);
   return 0;
}
 
   
