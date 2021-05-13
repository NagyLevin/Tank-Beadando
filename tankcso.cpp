#include "tankcso.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
using namespace std;
TankCso::TankCso(Window* parent, int x, int y, int sx, int sy, int player,int nagyX, int nagyY,int tankszinR,int tankszinG,int tankszinB) : Tank(parent,x,y,sx,sy,player,nagyX,nagyY,tankszinR,tankszinG,tankszinB)
{
 _parent->TankCsoWindow(this);




}
void TankCso::draw(int szin){




gout << move_to(_x+_sx/2,_y) << color(_tankszinR,_tankszinG,_tankszinB) << line(_angle+szin,_power);


}

void TankCso::esemenyCSO(event ev){
if(ev.keycode == key_right && _angle + 1 < 51){

    _angle = _angle + 1;

}
else if(ev.keycode == key_left&& _angle - 1 > -51){

    _angle = _angle - 1;

}

else if(ev.keycode == key_down&& _power + 1 < -1){

    _power = _power + 1;

}
else if(ev.keycode == key_up && _power - 1 > -31){

    _power = _power - 1;

}


//cout << _power <<endl;
//cout << _angle <<endl;
}
int TankCso::getangle(){
return _angle;
}
void TankCso::changer(int angle,int power){
_angle = angle;
_power = power;
}
