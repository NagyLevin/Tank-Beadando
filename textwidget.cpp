#include "textwidget.hpp"
#include "graphics.hpp"
#include <iostream>

using namespace genv;
using namespace std;

TextWidget::TextWidget(Window* parent, int x, int y, int sx, int sy,string szoveg) : Properties(parent,x,y,sx,sy),_szoveg(szoveg)
{
      _parent->TextWidgetWindow(this);


}

void TextWidget::draw(){



    gout << move_to(_x,_y) << color(255,255,255) << text(_szoveg);




}

void TextWidget::drawpower(int ertek){



    gout << color(255,255,255) << move_to(50,550) << text(to_string(ertek)) << text("%");




}
void TextWidget::drawangle(int ertek){



    gout << color(255,255,255) << move_to(240,570) << text(to_string(ertek)) << text("*");




}

void TextWidget :: esemeny(event ev){

}



