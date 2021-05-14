#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class Button : public Properties {
protected:






public:
    string _funkcio = "";
    Button( Window *parent,int x, int y, int sx, int sy,string funkcio);


        bool _selected = false;
        virtual void draw() override;
        virtual void esemeny(genv::event ev) override;

        void changer(int angle,int power);

        int getangle();
        int getpower();



};


#endif // BUTTON_HPP_INCLUDED
