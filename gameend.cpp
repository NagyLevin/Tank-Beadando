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
    int szovegmeret = _sy;


    gout << move_to(_x-_sx,_y) << color(255,255,255) << font("LiberationSans-BoldItalic.ttf",_sy,true) << text(_szoveg);


}



void GameEnd :: esemeny(event ev){




}



