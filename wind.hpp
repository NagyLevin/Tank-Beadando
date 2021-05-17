#ifndef WIND_HPP_INCLUDED
#define WIND_HPP_INCLUDED
#include "graphics.hpp"
#include "window.hpp"
#include "properties.hpp"

class Wind : public Properties {
protected:


public:


    Wind( Window *parent,int x, int y, int sx, int sy);



        void drawshow(int ertek);
        virtual void draw() override;
        virtual void esemeny(genv::event ev) override;






};



#endif // WIND_HPP_INCLUDED
