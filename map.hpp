#ifndef MAP_HPP_INCLUDED
#define MAP_HPP_INCLUDED
#include "graphics.hpp"
#include "window.hpp"
#include "properties.hpp"

class Map : public Properties {
protected:



public:

    Map( Window *parent,int x, int y, int sx, int sy);



        virtual void draw(int szin) override;
        virtual void esemeny(genv::event ev);




};



#endif // MAP_HPP_INCLUDED
