#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include "graphics.hpp"
#include <vector>

//forward deklaraciok
class Properties;
class Map;
class Tank;
class Button;
//forward deklaraciok
using namespace std;
using namespace genv;

class Window{
protected:
   vector<Properties*> vproperties;
   vector<Map*> vmap;
    vector<Tank*> vtank;
    vector<Button*> vbutton;
    int _XX,_YY;


public:


    Window(int sizeX, int sizeY);

    //widgetek

    void registerwidget(Properties *p);
    void MapWindow(Map *pm);
    void TankWindow(Tank *pt);
    void ButtonWindow(Button *pb);

    //widgetek

    void event_loop();


};




#endif // WINDOW_HPP_INCLUDED
