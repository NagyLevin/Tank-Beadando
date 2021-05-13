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
int playerW = 1;


    while(gin >> ev&& ev.keycode != key_escape) {

    if(ev.type == ev_timer)
    {
        gout << move_to(0,0) <<color(0,0,0) << box(_XX,_YY); //torles

    }

 //map

            for (Map * pm : vmap) {

                 pm->draw(10);


             }
 //map



 //button

            for (int i = 0; i < vbutton.size();i++) {


                vbutton[i]->draw(10);             //button
                vbutton[i]->esemeny(ev);
                vbutton[i]->controllevent(ev);

                 for (TankCso* pcs : vtankcso) {



                    if(pcs->_player == playerW){


                            pcs->changer(vbutton[i]->getangle(),vbutton[i]->getpower());

                            pcs->esemenyCSO(ev);



                            vbutton[i]->changer(pcs->getangle(),pcs->getpower());






                     }




                    }




                }

                         for (int i = 0; i < vbutton.size();i++) {

                            _angleW = _angleW + vbutton[i]->getangle();
                            _powerW = _powerW + vbutton[i]->getpower();
                           //  cout <<_angleW <<endl;
                         }

                        vtankcso[0]->changer(_angleW,_powerW);



                        for (Tank* pt : vtank) {

                                pt->draw(10);
                                _angleW = 0;
                                _powerW = 0;

                                }

                    for (int i = 0; i < vbutton.size();i++) {

                       // vbutton[i]->changer(_angleW,_powerW);

                    }

//button

//textwidget



              for (TextWidget* pt : vtextwidget) {

                 pt->draw(10);

             }
//textwidget

//tankmozgas

            if(ev.keycode == 'a' || ev.keycode == 'd'){



               for (Tank* pt : vtank) {
                    if(pt->_player == playerW){
                          pt->esemeny(ev);  //tank




             }


            }
            }
//tankmozgas

//tankcsomozgas




//tankcsomozgas









        gout << refresh;

    }
}
