#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/* this class has the private variables to keep track of inventory and 
   price as well as the functions to check that and sell cupcakes
*/
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    bool sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif