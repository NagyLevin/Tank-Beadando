#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class Button : public Properties {
protected:

bool _selected = false;


public:
    string _funkcio = "";
    Button( Window *parent,int x, int y, int sx, int sy,string funkcio);



        virtual void draw(int szin) override;
        virtual void esemeny(genv::event ev) override;
        void changer(int angle,int power);
        virtual void controllevent(genv::event ev);


};


#endif // BUTTON_HPP_INCLUDED
