/*
 * Carrier.h
 *
 *  Created on: 2016. dec. 6.
 *      Author: Tecra_Z50
 */

#ifndef CARRIER_H_
#define CARRIER_H_
#include "AirCraft.h"
#include "ToString.h"
#include <vector>

using namespace std;

class Carrier : public AirCraft {
protected:
  //unsigned int num_aircraft;
public:
  Carrier();
  unsigned int num_aircraft;
  void add_to_vector(string input);
  unsigned int fill_all_aircraft(int &ammo_storage) throw (const char*);
  string get_all_status();
  virtual ~Carrier();
};

#endif /* CARRIER_H_ */
