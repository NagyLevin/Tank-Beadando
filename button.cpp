#include "button.hpp"
#include "graphics.hpp"
using namespace genv;

Button::Button(Window* parent, int x, int y, int sx, int sy) : Properties(parent,x,y,sx,sy)
{
    _parent->ButtonWindow(this);
      _selected = false;

}

void Button::draw(int szin){


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


