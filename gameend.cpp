#include "gameend.hpp"
#include "graphics.hpp"
#include <iostream>

using namespace genv;
using namespace std;

GameEnd::GameEnd(Window* parent, int x, int y, int sx, int sy,string szoveg) : Properties(parent,x,y,sx,sy),_szoveg(szoveg)
{
      _parent->GameEndWindow(this);


}

void GameEnd::draw(){



    gout << move_to(_x-_sx,_y-_sy) << color(255,255,255) << text(_szoveg);


}



void GameEnd :: esemeny(event ev){




}


