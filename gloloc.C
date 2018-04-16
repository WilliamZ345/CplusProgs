#include <iostream>

using namespace std;
void println(int x)
{
   cout<<"value is: "<<x<<endl;
}

int a = 1;  

void my_test() 
{
   int b = 77;
   println(a);
   println(b);
}

void setup() 
{
   int b = 2;
   
   println(a);
   println(b);
   my_test();
   println(b);
}  

int main()
{
   setup();
}


