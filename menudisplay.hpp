#include <iostream>
using namespace std;


class order{
   private:
     string food;
     int value;
   public:
     int price()
     {
        if(food == "chicken")
        { 
           return 5;
        } 
        else if(food == "burger")
        {
           return 4; 
        } 
        else
        {
           cout<< "We don't sell " << food <<endl;
           return 0;
        } 
     }
      

     void menu()
     {
        cout<< "Welcome to our resteraunt! We sell burgers and chicken. What would you like to order? "<<endl;
        cin>>food;
        cout<< "How much of this food do you want? "<<endl;
        cin>>value;
     }   
     
     int amount()
     { 
        int total = (value * price()); 
        cout<< "Your order is: "<< value << " "<< food <<endl;
        cout<< "The total is: "<< "$"<< total <<endl;
        return total;
     }
}; 
  

