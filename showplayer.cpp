#include "showplayer.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
using namespace std;
ShowPlayer::ShowPlayer(Window* parent, int x, int y, int sx, int sy, int player,int nagyX, int nagyY,int tankszinR,int tankszinG,int tankszinB) : Tank(parent,x,y,sx,sy,player,nagyX,nagyY,tankszinR,tankszinG,tankszinB)
{
 _parent->ShowPlayerWindow(this);




}

void ShowPlayer::drawshow(){




gout << move_to(_x+_sx,_y -_sy) << color(_tankszinR,_tankszinG,_tankszinB) << line(-10,-10);
gout << move_to(_x+_sx,_y -_sy) << color(_tankszinR,_tankszinG,_tankszinB) << line(10,-10);
gout << move_to(_x+_sx,_y -_sy) << color(_tankszinR,_tankszinG,_tankszinB) << line(0,-20);


}

void ShowPlayer::draw(){


}

