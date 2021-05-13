#include "window.hpp"
#include "graphics.hpp"
#include "properties.hpp"
#include "map.hpp"
#include "tank.hpp"
#include "tankcso.hpp"
#include "button.hpp"
#include "textwidget.hpp"
#include <iostream>
using namespace genv;
using namespace std;


Window :: Window(int XX, int YY): _XX(XX),_YY(YY){
    gout.open(XX,YY);

    //font?

}

//vector
void Window :: registerwidget(Properties *p){
vproperties.push_back(p);

}
void Window :: MapWindow(Map *pm){
vmap.push_back(pm);

}
void Window :: TankWindow(Tank *pt){
vtank.push_back(pt);

}

void Window :: ButtonWindow(Button *pb){
vbutton.push_back(pb);

}
void Window :: TextWidgetWindow(TextWidget *pt){
vtextwidget.push_back(pt);

}

void Window :: TankCsoWindow(TankCso *pcs){
vtankcso.push_back(pcs);

}

//vector


void Window :: event_loop() {
    event ev;
   gin.timer(30);

    while(gin >> ev&& ev.keycode != key_escape) {

    if(ev.type == ev_timer)
    {
        gout << move_to(0,0) <<color(0,0,0) << box(_XX,_YY); //torles

    }



            for (Map * pm : vmap) {

                 pm->draw(10);             //map


             }
               for (Tank* pt : vtank) {

                 pt->draw(_angleW);


             }
            for (Button* pb : vbutton) {

                 pb->draw(10);             //button
                 pb->esemeny(ev);

                 for (TankCso* pcs : vtankcso) {
                    if(pcs->_player == 1){

                         pcs->changer(pb->_angle,pb->_power);
                              pcs->esemenyCSO(ev);

                    }
                }




             }

              for (TextWidget* pt : vtextwidget) {

                 pt->draw(10);

             }


            if(ev.keycode == 'a' || ev.keycode == 'd'){



               for (Tank* pt : vtank) {
                    if(pt->_player == 1){
                          pt->esemeny(ev);  //tank




             }


            }
            }

        if(ev.keycode == key_left || ev.keycode == key_right || ev.keycode == key_up || ev.keycode == key_down ){



               for (TankCso* pcs : vtankcso) {
                    if(pcs->_player == 1){
                          pcs->esemenyCSO(ev);
                          for (Button* pb : vbutton) {

                         pb->changer(pcs->_angle,pcs->_power);

                          }


                    }




             }


            }












        gout << refresh;

    }
}
