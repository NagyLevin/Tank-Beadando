#include "graphics.hpp"
#include "properties.hpp"
#include "map.hpp"
#include "window.hpp"
#include "tank.hpp"
#include "tankcso.hpp"
#include "button.hpp"
#include <vector>
#include <iostream>
#include "textwidget.hpp"

using namespace std;
using namespace genv;

const int X = 900;
const int Y = 600;



int main()
{


    Window  * win = new Window(X,Y);
    Map(win,1,400,X-1,50); //map alja/ honnan / milyen magasságban / hova /vastagsag
    Tank(win,50,365,65,30,1,X,Y,255,0,0);
    Tank(win,X-100,365,65,30,2,X,Y,255,255,0);

    TankCso(win,50,365,65,30,1,X,Y,255,0,0);
    TankCso(win,X-100,365,65,30,2,X,Y,255,255,0);

    Button(win,450,480,90,90);

    Button(win,200,500,50,50);//angle
    Button(win,260,500,50,50);//angle

    Button(win,100,490,50,50);//power
    Button(win,100,550,50,50);//power

    TextWidget(win,100,470,50,50,"POWER");//power
     TextWidget(win,230,470,50,50,"ANGLE");//angle
    TextWidget(win,475,470,50,50,"READY");//angle

    win->event_loop();




    return 0;
}
