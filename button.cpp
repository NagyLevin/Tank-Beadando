#include "button.hpp"
#include "graphics.hpp"
#include "iostream"
using namespace genv;
using namespace std;

Button::Button(Window* parent, int x, int y, int sx, int sy,string funkcio) : Properties(parent,x,y,sx,sy), _funkcio(funkcio)
{
    _parent->ButtonWindow(this);
      _selected = false;

}

void Button::draw(){


if(_selected == true){

    gout << move_to(_x,_y) << color(255,255,255) << box(_sx,_sy);


}
else if(_selected == false){
  gout << move_to(_x,_y) << color(255,0,0) << box(_sx,_sy);

}



}

void Button :: esemeny(event ev){
if(is_selected(ev.pos_x,ev.pos_y) && ev.type == ev_mouse && ev.button==btn_left ){
    _selected = true;



}
if(!is_selected(ev.pos_x,ev.pos_y) && ev.type == ev_mouse && ev.button==btn_left) {
   _selected = false;


}

}


void Button::controllevent(event ev){


/*

if(_selected == true){




 if(_funkcio == "angle+" && _angle + 5 < 51){

    _angle = _angle + 5;
    _selected = false;
    cout << "test1" << endl;
}

 if(_funkcio == "angle-" && _angle - 5 > -51){

    _angle = _angle - 5;
    _selected = false;
     cout << "test2" << endl;
}





 if(_funkcio == "power+" && _power + 5 < -1){

    _power = _power + 5;
    _selected = false;
     cout << "test3" << endl;
}

 if(_funkcio == "power-" && _power - 5 > -31){

    _power = _power - 5;
    _selected = false;
     cout << "test4" << endl;
}




}
*/
 //cout << _power <<endl;
}



void Button::changer(int angle,int power){
_angle = angle;
_power = power;

}

int Button::getangle(){
return _angle;

}



int Button::getpower(){
return _power;

}
