#ifndef PROJECTILE_HPP_INCLUDED
#define PROJECTILE_HPP_INCLUDED

#include "graphics.hpp"
#include "tankcso.hpp"
#include "window.hpp"

class Projectile : public TankCso {
protected:


        double _ido = 0;

        double _lovedekX = 0;
        double _lovedekY = 0;
        double _flyX = 0;
        double _flyY = 0;

        double _szel;



public:



        Projectile( Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB);



            virtual void draw() override;
            virtual void drawprojectile();
            virtual void esemeny(genv::event ev);
            void getpangle(double angle, double power);
            void getszel(double szel);
            double givelovedekX();
            double givelovedekY();




};


#endif // PROJECTILE_HPP_INCLUDED
