#include "wind.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
using namespace std;
Wind::Wind(Window* parent, int x, int y, int sx, int sy) : Properties(parent,x,y,sx,sy)
{
 _parent->WindWindow(this);




}

void Wind::drawshow(int ertek){



if(ertek > 0){

gout << move_to(_x,_y) << color(255,255,255) << line(10,-10);
gout << move_to(_x,_y) << color(255,255,255) << line(10,10);
gout << move_to(_x,_y) << color(255,255,255) << line(20,0);
}
gout << move_to(_x-10,_y+25) << color(255,255,255) << text(to_string(ertek));

if(ertek < 0){


gout << move_to(_x,_y) << color(255,255,255) << line(-10,10);
gout << move_to(_x,_y) << color(255,255,255) << line(-10,-10);
gout << move_to(_x,_y ) << color(255,255,255) << line(-20,0);
}



}

void Wind::draw(){


}

void Wind::esemeny(genv::event ev){


}
