#ifndef SHOWPLAYER_HPP_INCLUDED
#define SHOWPLAYER_HPP_INCLUDED
#include "graphics.hpp"
#include "window.hpp"
#include "tank.hpp"

class ShowPlayer : public Tank {
protected:


public:


    ShowPlayer( Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB);



        void drawshow();
        virtual void draw() override;



};



#endif // SHOWPLAYER_HPP_INCLUDED
