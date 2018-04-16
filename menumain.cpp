#include "menudisplay.hpp"
using namespace std;

int main()
{
   int total;  
   order customer[10];
   int n = 0;
   for (n=0; n<10; n++)
   {
      customer[n].menu();
   
      total = customer[n].amount() + total; 
   };
   cout<< "$" <<total<<endl; 
   return 0;
}
 
