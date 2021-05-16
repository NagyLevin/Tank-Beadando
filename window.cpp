#include "window.hpp"
#include "graphics.hpp"
#include "properties.hpp"
#include "map.hpp"
#include "tank.hpp"
#include "tankcso.hpp"
#include "button.hpp"
#include "textwidget.hpp"
#include "projectile.hpp"
#include "gameend.hpp"
#include "gamebegin.hpp"
#include "showplayer.hpp"

#include <math.h>
#include <iostream>
using namespace genv;
using namespace std;

int Window::PlayerCahnger(int player){
if(player ==1){
return 2;

}

if(player ==2){
return 1;

}


}

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

void Window :: GameEndWindow(GameEnd *pge){
vgameend.push_back(pge);

}
void Window :: GameBeginWindow(GameBegin *pgb){
vgamebegin.push_back(pgb);

}

void Window :: ShowPlayerWindow(ShowPlayer *psp){
vshowplayer.push_back(psp);

}



void Window::Gamestarter(Window * win){

    Map(win,1,400,_XX-1,50); //map alja/ honnan / milyen magasságban / hova /vastagsag

    Tank(win,50,365,65,30,1,_XX,_YY,255,0,0);
    Tank(win,_XX-100,365,65,30,2,_XX,_YY,255,255,0);

    TankCso(win,50,365,65,30,1,_XX,_YY,255,0,0);
    TankCso(win,_XX-100,365,65,30,2,_XX,_YY,255,255,0);

    ShowPlayer(win,50,365,30,40,1,_XX,_YY,255,0,0);
    ShowPlayer(win,_XX-100,365,30,40,100,_XX,_YY,255,255,0);


    Button(win,460,500,90,90,"tuz");

    Button(win,260,500,50,50,"angle+");//angle
    Button(win,200,500,50,50,"angle-");//angle


    Button(win,100,490,50,50,"power-");//power
    Button(win,100,550,50,50,"power+");//power

    Button(win,750,500,70,70,"fuel");//power

    TextWidget(win,100,470,50,50,"POWER");//power
    TextWidget(win,230,470,50,50,"ANGLE");//angle
    TextWidget(win,475,470,50,50,"READY");//fire
    TextWidget(win,770,480,50,50,"FUEL");//fuel

    GameEnd(win,_XX/3,_YY/3,50,60,"GAME OVER");
    GameEnd(win,_XX/3,_YY/3+75,-20,40,"New Game");
    GameEnd(win,_XX/3,_YY/3+125,-50,40,"Menu");

    GameBegin(win,_XX/3,_YY/3-100,50,65,"TANK WARS");
    GameBegin(win,_XX/3,_YY/3+50,-100,40,"Start");
    GameBegin(win,_XX/3,_YY/3+100,-100,40,"Help");


    win->event_loop(win);
}

//vector


void Window :: event_loop(Window * win) {
event ev;
gin.timer(30);


    while(gin >> ev && ev.keycode != key_escape) {

    if(ev.type == ev_timer)
    {
        gout << move_to(0,0) <<color(0,0,0) << box(_XX,_YY); //torles

    }

 if(jatek == true && jatekvege == false){

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

//showplayer


  for (int i = 0;i < vshowplayer.size();i++) {

        if( playerW == 1){
            vshowplayer[0]->drawshow();
        }

        if( playerW == 2){
            vshowplayer[1]->drawshow();
        }
        }


//showplayer





 //button



                                if(loves == false){
                            _angleW = vtankcso[playerW-1]->getangle();
                            _powerW = vtankcso[playerW-1]->getpower();

                                }






                         for (int i = 0; i < vbutton.size();i++) {


                                vbutton[i]->draw();             //button
                                vbutton[i]->esemeny(ev);


                           if(vbutton[i]->_selected == true && loves == false){

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

                              if(loves == false){
                            vtankcso[playerW-1]->changer(_angleW,_powerW);

                                }





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
            if(loves == false){
            if(ev.keycode == 'a' || ev.keycode == 'd'){



               for (Tank* pt : vtank) {
                    if(pt->_player == playerW){
                    pt->esemeny(ev);  //tank




             }


            }
            }
            }
//tankmozgas

//tankcsomozgas


                      for (TankCso* pcs : vtankcso) {



                    if(pcs->_player == playerW && loves == false && lott == false){
                            pcs->esemenyCSO(ev);

                    }
                    }




//tankcsomozgas


//projectile mozgasa


if(lott == false && loves == true){
for (int i = 0; i < vprojectile.size(); i++) {


vprojectile[i]->esemeny(ev);
vprojectile[vprojectile.size()-1]->drawprojectile();
vprojectile[i]->getpangle(_angleW,_powerW);



}


}




for(Button * pb : vbutton){
 if(pb->_funkcio == "tuz" && pb->_selected == true){

pb->_selected = false;
_selectedW = true;
}


}

if((ev.keycode == key_space ||  _selectedW == true) && loves == false){

Projectile *pp = new Projectile(win,vtankcso[playerW-1]->_x+vtankcso[playerW-1]->_sx/2+_angleW,vtankcso[playerW-1]->_y+_powerW,65,30,2,_XX,_YY,vtankcso[playerW-1]->_tankszinR,vtankcso[playerW-1]->_tankszinG,vtankcso[playerW-1]->_tankszinB);

vprojectile.push_back(pp);
_selectedW = false;
loves = true;

}






//projectile mozgasa


//lott

if(loves == true && lott == false){


     for(int i = 0; i < vprojectile.size(); i++){



            if( vprojectile[i]->givelovedekX() > vtank[PlayerCahnger(playerW)-1]->_x && vprojectile[i]->givelovedekX() < vtank[PlayerCahnger(playerW)-1]->_sx +vtank[PlayerCahnger(playerW)-1]->_x && vprojectile[i]->givelovedekY() > vtank[PlayerCahnger(playerW)-1]->_y && vprojectile[i]->givelovedekY() < vtank[PlayerCahnger(playerW)-1]->_sy +vtank[PlayerCahnger(playerW)-1]->_y ){

                jatekvege = true;

            }
            else if(vprojectile[vprojectile.size()-1]->givelovedekX() > _XX ||  vprojectile[vprojectile.size()-1]->givelovedekX() < 0 || vprojectile[vprojectile.size()-1]->givelovedekY() < 0 || vprojectile[vprojectile.size()-1]->givelovedekY() > 400 ){

              vprojectile[i] == nullptr;
             // delete vprojectile[i];
              lott = true;



            }


    }

}



//lott





//playervaltas

if( lott == true && loves == true){

playerW = PlayerCahnger(playerW);

//cout << playerW <<endl;
loves = false;
lott = false;


}



} //jatek



if(jatekvege == true){

for (GameEnd * pge : vgameend) {

pge->draw();

}

}




if(jatek == false){

for (GameBegin * pgb : vgamebegin) {

pgb->draw();

}

}




















        gout << refresh;

    }
}
