#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//constructor
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//function to sell. returns false if no inventory; true if there is and decriments the inventory by 1
bool Inventory::sell()
{
	if(m_in_stock >= 1)
	{
		m_in_stock--;
		return true;
	}	
  	else
  	{
  		return false;
  	}
}

ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}