/*
 * AirCraft.h
 *
 *  Created on: 2016. dec. 6.
 *      Author: Tecra_Z50
 */

#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_

#include <string>

using namespace std;

class AirCraft {
protected:
  unsigned int actual_ammo;
  unsigned int ammo_storage;
  unsigned int damage;
  string aircraft_type;
  unsigned int max_ammo;
  unsigned int base_damage;
public:
  AirCraft();
  string get_type();
  unsigned int fight();
  unsigned int refill(int &ammo_storage);
  string get_status();
  virtual ~AirCraft();
};


#endif /* AIRCRAFT_H_ */
