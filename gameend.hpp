#ifndef GAMEEND_HPP_INCLUDED
#define GAMEEND_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class GameEnd : public Properties {
protected:
        string _szoveg;



public:

    GameEnd( Window *parent,int x, int y, int sx, int sy,string szoveg);



        virtual void draw() override;

        virtual void esemeny(genv::event ev) override;


};


#endif // GAMEEND_HPP_INCLUDED
