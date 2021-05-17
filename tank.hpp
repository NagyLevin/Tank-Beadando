#ifndef TANK_HPP_INCLUDED
#define TANK_HPP_INCLUDED
#include "graphics.hpp"
#include "window.hpp"
#include "properties.hpp"

class Tank : public Properties {
protected:


         int _nagyX = 0;
         int _nagyY = 0;

public:
        int _player = 0;
        int _tankszinR = 255;
        int _tankszinG = 0;
        int _tankszinB = 0;
        int _fuel = 100;

    Tank( Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB);



        virtual void draw() override;
        virtual void esemeny(genv::event ev) override;
        int getfuel();
        void changepos(int x);


};



#endif // TANK_HPP_INCLUDED
