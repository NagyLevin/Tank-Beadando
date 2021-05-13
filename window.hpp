#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "graphics.hpp"
#include <vector>

//forward deklaraciok
class Properties;
class Map;
class Tank;
class Button;
class TextWidget;
class TankCso;
//forward deklaraciok
using namespace std;
using namespace genv;

class Window{
protected:
   vector<Properties*> vproperties;
   vector<Map*> vmap;
    vector<Tank*> vtank;
    vector<Button*> vbutton;
    vector<TextWidget*> vtextwidget;
    vector<TankCso*> vtankcso;
    int _XX,_YY;
    int _angleW;
    int _powerW;

public:


    Window(int sizeX, int sizeY);

    //widgetek

    void registerwidget(Properties *p);
    void MapWindow(Map *pm);
    void TankWindow(Tank *pt);
    void ButtonWindow(Button *pb);
    void TextWidgetWindow(TextWidget *pt);
    void TankCsoWindow(TankCso *pcs);

    //widgetek

    void event_loop();


};




#endif // WINDOW_HPP_INCLUDED
