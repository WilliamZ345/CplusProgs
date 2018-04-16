#include <iostream>
#include <string>
using namespace std;

class Resteraunt
{
     public:
     string food;
     int workers;
     int price;

     void display()
     {
          cout << "Food type: "<< food << endl;
          cout << "# of workers: "<< workers << endl;
          cout << "Average price: "<< price << endl;
     }

     void input()
     {
          cout << "Input food type: "<< endl;
          cin >> food;
          cout << "Input # of workers: "<< endl;
          cin >> workers;
          cout << "Input average price: "<< endl;
          cin >> price;
     }
};


int main()
{
   Resteraunt Mizumi;
   Resteraunt McDonalds;
   Resteraunt KFC;

   cout << "please input for Mizumi: " <<endl;
   Mizumi.input();
   cout << "please input for McDonalds: " <<endl;
   McDonalds.input();
   cout << "please input for KFC: " <<endl;
   KFC.input();

   cout << "Resteraunt information: "<< endl;
   Mizumi.display();
   McDonalds.display();
   KFC.display();
} 
