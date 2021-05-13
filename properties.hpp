#ifndef PROPERTIES_HPP_INCLUDED
#define PROPERTIES_HPP_INCLUDED

#include "graphics.hpp"
#include "window.hpp"

class Properties {
protected:
    Window *_parent;
    int _x, _y, _sx, _sy ;




public:

    Properties( Window *parent,int x, int y, int sx, int sy);


        virtual bool is_selected(int mouse_x, int mouse_y);
        virtual void draw(int szin) = 0;
        virtual void esemeny(genv::event ev) = 0;


};


#endif // PROPERTIES_HPP_INCLUDED
