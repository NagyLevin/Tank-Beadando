#ifndef GAMEBEGIN_HPP_INCLUDED
#define GAMEBEGIN_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class GameBegin : public Properties {
protected:

    string _szoveg;
    int _menu;


public:
     bool _lepes = false;
    GameBegin( Window *parent,int x, int y, int sx, int sy,string szoveg,int menu);



        virtual void draw() override;
        virtual void esemeny(genv::event ev) override;


};


#endif // GAMEBEGIN_HPP_INCLUDED
