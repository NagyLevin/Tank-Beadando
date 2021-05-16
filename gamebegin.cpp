#include "Gamebegin.hpp"
#include "graphics.hpp"
#include <iostream>

using namespace genv;
using namespace std;

GameBegin::GameBegin(Window* parent, int x, int y, int sx, int sy,string szoveg) : Properties(parent,x,y,sx,sy),_szoveg(szoveg)
{
      _parent->GameBeginWindow(this);


}

void GameBegin::draw(){



    gout << move_to(_x-_sx,_y-_sy) << color(255,255,255) << text(_szoveg);




}




void GameBegin :: esemeny(event ev){




}



