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
class Projectile;
class GameEnd;
class GameBegin;
class ShowPlayer;

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
    vector<Projectile*> vprojectile;
    vector<GameEnd*> vgameend;
    vector<GameBegin*> vgamebegin;
    vector<ShowPlayer*> vshowplayer;

    int _XX,_YY;

    double _angleW  = 0;
    double _powerW  = 0;
    bool _selectedW = false;

    //game
    int playerW = 0;
    bool jatek = true;
    bool jatekvege = false;
    bool loves = false;
    bool lott = false;

public:


    Window(int sizeX, int sizeY);

    //widgetek

    void registerwidget(Properties *p);
    void MapWindow(Map *pm);
    void TankWindow(Tank *pt);
    void ButtonWindow(Button *pb);
    void TextWidgetWindow(TextWidget *px);
    void TankCsoWindow(TankCso *pcs);
    void ProjectileWindow(Projectile *pp);
    void GameEndWindow(GameEnd *pge);
    void GameBeginWindow(GameBegin *pgb);
    void Gamestarter(Window * win);
    void ShowPlayerWindow(ShowPlayer *psp);

    int PlayerCahnger(int player);

    //widgetek

    void event_loop(Window * win);


};




#endif // WINDOW_HPP_INCLUDED
