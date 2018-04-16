#include <iostream>
using namespace std;

int adres()
{
   int a;
   int b = a;
   int* c = &a;
 
   cout << "input one value for both a and b: " << endl; 
   cin >> a; 
   cout << "input values for both a and b are: " << endl; 
   cout << a << ", and " << b << endl;
   cout << "address of c is: "<< c << endl;
   cout << "content in address of c is: "<< *c << endl;
   
   return 0;
}

int main()
{
   int rc = 0;
   rc = adres();
   return rc;
}
   
