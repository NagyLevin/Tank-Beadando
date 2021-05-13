#include "map.hpp"
#include "graphics.hpp"
#include <iostream>
using namespace genv;
using namespace std;
Map::Map(Window* parent, int x, int y, int sx, int sy) : Properties(parent,x,y,sx,sy)
{
 _parent->MapWindow(this);


}
void Map::draw(int szin){




gout << move_to(_x,_y) << color(0,0,255) << box_to(_sx,_y+_sy);


}

void Map::esemeny(event ev){

}

