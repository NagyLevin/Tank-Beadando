#include "window.hpp"
#include "graphics.hpp"
#include "properties.hpp"
#include "map.hpp"
#include "tank.hpp"
#include "tankcso.hpp"
#include "button.hpp"
#include "textwidget.hpp"
#include "projectile.hpp"
#include <math.h>
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
void Window :: TextWidgetWindow(TextWidget *px){
vtextwidget.push_back(px);

}

void Window :: TankCsoWindow(TankCso *pcs){
vtankcso.push_back(pcs);

}
/*
void Window :: ProjectileWindow(Projectile *pp){
vprojectile.push_back(pp);

}
*/
//vector


void Window :: event_loop() {
event ev;
gin.timer(30);
int playerW = 1;
Window  * winwin = new Window(_XX,_YY);

    while(gin >> ev&& ev.keycode != key_escape) {

    if(ev.type == ev_timer)
    {
        gout << move_to(0,0) <<color(0,0,0) << box(_XX,_YY); //torles

    }

 //map

            for (Map * pm : vmap) {

                 pm->draw();


             }
 //map

 //tankok kirajzolasa

      for (Tank* pt : vtank) {

            pt->draw();


                }

//tankok kirajzolasa

 //button





                            _angleW = vtankcso[playerW-1]->getangle();
                            _powerW = vtankcso[playerW-1]->getpower();

                         for (int i = 0; i < vbutton.size();i++) {


                                vbutton[i]->draw();             //button
                                vbutton[i]->esemeny(ev);


                           if(vbutton[i]->_selected == true){

                            if(vbutton[i]->_funkcio == "angle+" && _angleW + 5 < 51){

                                _angleW = _angleW + 5;
                                vbutton[i]->_selected = false;

                            }
                            if(vbutton[i]->_funkcio == "angle-" && _angleW -5 > -51){

                                _angleW = _angleW - 5;
                                vbutton[i]->_selected = false;

                            }
                             if(vbutton[i]->_funkcio == "power+" && _powerW + 5 < -1){

                                _powerW = _powerW + 5;
                                vbutton[i]->_selected = false;

                            }
                               if(vbutton[i]->_funkcio == "power-" && _powerW - 5 > -31){

                                _powerW = _powerW - 5;
                                vbutton[i]->_selected = false;

                            }




                           }






                         }

                        vtankcso[playerW-1]->changer(_angleW,_powerW);







//button

//textwidget



              for (TextWidget* px : vtextwidget) {

                 px->draw();


                 px->drawpower(((_powerW/-31)*100)+4);

                 px->drawangle(180-(90+(atan(_angleW/_powerW)*180)/M_PI));

                 px->drawfuel(vtank[playerW-1]->getfuel());
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


                      for (TankCso* pcs : vtankcso) {



                    if(pcs->_player == playerW){
                            pcs->esemenyCSO(ev);

                    }
                    }




//tankcsomozgas


//projectile mozgasa

for (Projectile* pp : vprojectile) {

//if(vtank[playerW-1]->_player = playerW){

pp->drawprojectile();
pp->esemeny(ev);
//}


}

if(ev.keycode == key_enter){

Projectile *pp = new Projectile(winwin,vtankcso[playerW-1]->_x+vtankcso[playerW-1]->_sx/2+_angleW,vtankcso[playerW-1]->_y+_powerW,65,30,2,_XX,_YY,vtankcso[playerW-1]->_tankszinR,vtankcso[playerW-1]->_tankszinG,vtankcso[playerW-1]->_tankszinB);

vprojectile.push_back(pp);


}






//projectile mozgasa


//playervaltas

if(ev.keycode == key_backspace){

    if(playerW == 1){

        playerW = 2;
    }

   else if(playerW == 2){

        playerW = 1;
    }


}


//playervaltas




























        gout << refresh;

    }
}
