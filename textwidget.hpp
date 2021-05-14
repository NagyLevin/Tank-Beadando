#ifndef TEXTWIDGET_HPP_INCLUDED
#define TEXTWIDGET_HPP_INCLUDED

#include "graphics.hpp"
#include "properties.hpp"
#include "window.hpp"

class TextWidget : public Properties {
protected:

    string _szoveg = "";


public:

    TextWidget( Window *parent,int x, int y, int sx, int sy,string szoveg);



        virtual void draw() override;
        void drawint(int szin);
        virtual void esemeny(genv::event ev) override;


};


#endif // TEXTWIDGET_HPP_INCLUDED
