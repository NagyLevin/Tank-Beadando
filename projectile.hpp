#ifndef PROJECTILE_HPP_INCLUDED
#define PROJECTILE_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class Projectile : public Properties {
protected:

        int _fly = 0;




public:

        Projectile( Window *parent,int x, int y, int sx, int sy);



        virtual void draw() override;
        virtual void esemeny(genv::event ev) override;
        void getangle(double angle, double power);






};


#endif // PROJECTILE_HPP_INCLUDED
