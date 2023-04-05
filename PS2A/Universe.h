// Copyright Tashia Boddu 2021
#ifndef _HOME_OSBOXES_COMPIV_PS2A_UNIVERSE_H_
#define _HOME_OSBOXES_COMPIV_PS2A_UNIVERSE_H_

#include "CelestialBody.h"
#include <istream>
#include <memory>
#include <vector>
#include <string>
#include <SFML/Graphics/Sprite.hpp>

using namespace std;  //NOLINT

class Universe {
 public:
  friend istream &operator>>(istream &in, Universe &univ) {
    double _xpos, _ypos, _xvel, _yvel, _mass;
    string _filename;
    in >> univ.N >> univ.R;

    for (int i = 0; i < univ.N; i++) {
      in >> _xpos >> _ypos >> _xvel >> _yvel >> _mass >> _filename;
      shared_ptr<CelestialBody> temp(
          new CelestialBody(_xpos, _ypos, _xvel, _yvel, _mass, _filename));
      univ.celB.push_back(temp);
    }
    return in;
  }

  int getN() const { return N; }
  double getR() const { return R; }

  shared_ptr<CelestialBody> getPlanet(int i) { return celB[i]; }

 private:
  vector<shared_ptr<CelestialBody>> celB;
  int N;    // Number of CelestialBody objects in the universe
  double R;  // Radius of the universe
};

#endif  // _HOME_OSBOXES_COMPIV_PS2A_UNIVERSE_H_
