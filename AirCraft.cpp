/*
 * AirCraft.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Tecra_Z50
 */
using namespace std;
#include "AirCraft.h"
#include "ToString.h"

AirCraft::AirCraft() {
  this->actual_ammo = 0;
  this->damage = 0;
  this->ammo_storage = 100;
}

string AirCraft::get_type() {
  return aircraft_type;
}

unsigned int AirCraft::fight() {
  damage = base_damage * actual_ammo;
  actual_ammo = 0;
  return damage;
}

unsigned int AirCraft::refill(int &ammo_storage) {
  actual_ammo = max_ammo;
  ammo_storage -= actual_ammo;
  return ammo_storage;
}

string AirCraft::get_status() {
  return "Type " + aircraft_type + ", Ammo: " + to_string(actual_ammo) + ", Base Damage: " + to_string(base_damage) +
      ", All Damage: " + to_string(damage);
}

AirCraft::~AirCraft() {
}

