#ifndef TANKCSO_HPP_INCLUDED
#define TANKCSO_HPP_INCLUDED
#include "graphics.hpp"
#include "window.hpp"
#include "tank.hpp"

class TankCso : public Tank {
protected:


public:

    TankCso( Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB);



        virtual void draw(int szin) override;

        virtual void esemenyCSO(genv::event ev);



};



#endif // TANKCSO_HPP_INCLUDED
