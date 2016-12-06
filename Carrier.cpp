/*
 * Carrier.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Tecra_Z50
 */
using namespace std;

#include "Carrier.h"
#include "AirCraft.h"

Carrier::Carrier() : AirCraft() {
  num_aircraft = 0;
}

void Carrier::add_to_vector(string input) {
  if (input == "F16") {
    aircraft_type = "F16";
    vector<Carrier*> myVector;
    Carrier* p = NULL;
    for (unsigned int i = 0; i < num_aircraft; i++) {
       p = new Carrier();
       myVector.push_back(p);
    }
    delete p;
    p = NULL;
    num_aircraft++;
  }
  else if (input == "F35") {
    aircraft_type = "F35";
    vector<Carrier*> myVector;
    Carrier* p = NULL;
    for (unsigned int i = 0; i < num_aircraft; i++) {
       p = new Carrier();
       myVector.push_back(p);
    }
    delete p;
    p = NULL;
    num_aircraft++;
  }
  else {
  }
}

string Carrier::get_all_status() {
  return "Aircraft count: " + to_string(num_aircraft) + ", Ammo Storage: " + to_string(ammo_storage) + "\n"+
      "Aircrafts: \n"
      "Type " + aircraft_type + ", Ammo: " + to_string(actual_ammo) + ", Base Damage: " + to_string(base_damage) +
      ", All Damage: " + to_string(damage) + "\n";
}

unsigned int Carrier::fill_all_aircraft(int &ammo_storage) throw (const char*) {
  if (ammo_storage < (max_ammo - actual_ammo)) {
    actual_ammo = max_ammo;
    ammo_storage -= actual_ammo;
    return ammo_storage;
  }
  else {
    throw "Error: Cannot fill, ammo storage not enough.";
  }
}

Carrier::~Carrier() {
}

