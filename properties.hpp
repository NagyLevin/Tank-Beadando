#ifndef PROPERTIES_HPP_INCLUDED
#define PROPERTIES_HPP_INCLUDED

#include "graphics.hpp"
#include "window.hpp"

class Properties {
protected:
    Window *_parent;





public:
    int _x, _y, _sx, _sy ;
    double _power = -10;
    double _angle = -10;

    Properties( Window *parent,int x, int y, int sx, int sy);


        virtual bool is_selected(int mouse_x, int mouse_y);
        virtual void draw();
        virtual void esemeny(genv::event ev) = 0;


};


#endif // PROPERTIES_HPP_INCLUDED
