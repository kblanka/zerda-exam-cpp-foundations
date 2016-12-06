/*
 * ToString.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Tecra_Z50
 */

#include <sstream>
#include "ToString.h"

using namespace std;

string to_string(int integer) {
  stringstream ss;
  ss << integer;
  return ss.str();
}
