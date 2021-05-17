#include "gameend.hpp"
#include "graphics.hpp"
#include <iostream>

using namespace genv;
using namespace std;

GameEnd::GameEnd(Window* parent, int x, int y, int sx, int sy,string szoveg,int menu) : Properties(parent,x,y,sx,sy),_szoveg(szoveg),_menu(menu)
{
      _parent->GameEndWindow(this);


}

void GameEnd::draw(){


    if(_lepes != _menu){
         gout << move_to(_x-_sx,_y) << color(255,255,255) << font("LiberationSans-BoldItalic.ttf",_sy,true) << text(_szoveg);

    }
   if(_lepes == _menu){
      gout << move_to(_x-_sx,_y) << color(255,0,0) << font("LiberationSans-BoldItalic.ttf",_sy,true) << text(_szoveg);

   }




}



void GameEnd :: esemeny(event ev){

if(ev.keycode == 's'){
    _lepes = _lepes-1;

    if(_lepes < 1){
        _lepes = 2;
    }

}

if(ev.keycode == 'w'){
    _lepes = _lepes+1;

    if(_lepes > 2){
        _lepes = 1;
    }

}



}

