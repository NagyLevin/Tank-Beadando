#ifndef GAMEEND_HPP_INCLUDED
#define GAMEEND_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class GameEnd : public Properties {
protected:
        string _szoveg;
        int _menu = 0;


public:
    int _lepes = 0;
    GameEnd( Window *parent,int x, int y, int sx, int sy,string szoveg,int menu);



        virtual void draw() override;

        virtual void esemeny(genv::event ev) override;

        void getplayer(int player);

};


#endif // GAMEEND_HPP_INCLUDED
