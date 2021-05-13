#include "tank.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
using namespace std;
Tank::Tank(Window* parent, int x, int y, int sx, int sy, int player,int nagyX, int nagyY,int tankszinR,int tankszinG,int tankszinB) : Properties(parent,x,y,sx,sy), _player(player), _nagyX(nagyX),_nagyY(nagyY),_tankszinR(tankszinR),_tankszinG(tankszinG),_tankszinB(tankszinB)
{
 _parent->TankWindow(this);
_fuel = 100;

}
void Tank::draw(int szin){




gout << move_to(_x,_y) << color(_tankszinR,_tankszinG,_tankszinB) << box(_sx,_sy);
//gout << move_to(_x+_sx/2,_y-_sy) << color(_tankszinR,_tankszinG,_tankszinB) << box(_sx/2,_sy/2);

}

void Tank::esemeny(event ev){

if(_player == 1){

  if(ev.keycode == 'd'){

    if(_fuel > 0){
          _x = _x + 2;
           _fuel = _fuel -1;
       }



}
else if(ev.keycode == 'a'){

     if(_x -2 > 1 && _fuel > 0){
    _x = _x - 2;
     _fuel = _fuel -1;
     }
}

}

if(_player == 2){

  if(ev.keycode == 'd'){

    if(_x + 2 < _nagyX -100 && _fuel > 0){
          _x = _x + 2;
          _fuel = _fuel -1;
       }



}
else if(ev.keycode == 'a'){

     if(_fuel > 0){
        _x = _x - 2;
        _fuel = _fuel -1;
     }
}

}



}

