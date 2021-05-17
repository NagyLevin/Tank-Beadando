#include "Gamebegin.hpp"
#include "graphics.hpp"
#include <iostream>

using namespace genv;
using namespace std;

GameBegin::GameBegin(Window* parent, int x, int y, int sx, int sy,string szoveg,int menu) : Properties(parent,x,y,sx,sy),_szoveg(szoveg),_menu(menu)
{
      _parent->GameBeginWindow(this);
    _lepes = false;

}

void GameBegin::draw(){



   int szovegmeret = _sy;

    if(_lepes != _menu){
         gout << move_to(_x-_sx,_y) << color(255,255,255) << font("LiberationSans-BoldItalic.ttf",_sy,true) << text(_szoveg);

    }
   if(_lepes == _menu){
      gout << move_to(_x-_sx,_y) << color(255,0,0) << font("LiberationSans-BoldItalic.ttf",_sy,true) << text(_szoveg);

   }




}




void GameBegin :: esemeny(event ev){

if(ev.keycode == 's'){
 _lepes = true;

}

if(ev.keycode == 'w'){
  _lepes = true;

}



}



