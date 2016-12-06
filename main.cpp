//============================================================================
// Name        : AirCraftProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include "Carrier.h"
#include "AirCraft.h"
#include "F16.h"
#include "F35.h"

using namespace std;

int main() {
  Carrier carrier;
  //int ammo_storage = 100;

  F16 f1;
  F35 f2;
  f2.refill(ammo_storage);
  cout << f2.get_status() << endl;
  f2.fight();
  cout << "After fight: " << endl;
  cout << f2.get_status() << endl << endl;

  cout << "Carrier: " << endl;
  carrier.add_to_vector("F16");
  cout << carrier.get_all_status();
  carrier.fill_all_aircraft(ammo_storage);
	return 0;
}
