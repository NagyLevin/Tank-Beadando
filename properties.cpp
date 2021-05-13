#include "properties.hpp"
#include "graphics.hpp"
using namespace genv;

Properties::Properties(Window* parent, int x, int y, int sx, int sy) : _parent(parent), _x(x), _y(y), _sx(sx), _sy(sy)
{
    _parent->registerwidget(this);


}

bool Properties::is_selected(int mouse_x, int mouse_y)
{

    return mouse_x>_x && mouse_y>_y && mouse_y<_y+_sy && mouse_x<_x+_sx ;

}
void Properties :: esemeny(event ev){

}

