#include "projectile.hpp"
#include "graphics.hpp"
#include "iostream"
using namespace genv;
using namespace std;

Projectile::Projectile(Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB) : TankCso(parent,x,y,sx,sy,player,nagyX,nagyY,tankszinR,tankszinG,tankszinB)
{
    _parent->ProjectileWindow(this);


}

void Projectile::draw(){










}

void Projectile::drawprojectile(){

int r = 5;

        for(int dx = -r; dx<= r; dx++){
    for(int dy =-r; dy<=r;dy++){
        if(dx*dx+dy*dy<=r*r){

            gout << color(_tankszinR/2,_tankszinG/2,_tankszinB/2)<<move_to(_x+dx+_angle  + _fly,_y+dy+_power +_fly/2) <<dot;

        }
    }

}


}

void Projectile :: esemeny(event ev){

if(ev.keycode == key_enter){

_fly = _fly + 1;

}



}



