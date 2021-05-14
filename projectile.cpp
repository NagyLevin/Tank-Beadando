#include "projectile.hpp"
#include "graphics.hpp"
#include "iostream"
using namespace genv;
using namespace std;

Projectile::Projectile(Window* parent, int x, int y, int sx, int sy) : Properties(parent,x,y,sx,sy)
{
    _parent->ProjectileWindow(this);


}

void Projectile::draw(){



int r = _sx;

        for(int dx = -r; dx<= r; dx++){
    for(int dy =-r; dy<=r;dy++){
        if(dx*dx+dy*dy<=r*r){

            gout << color(125,0,0)<<move_to(_x+dx + _fly,_y+dy) <<dot;

        }
    }

}







}

void Projectile :: esemeny(event ev){

if(ev.keycode == key_enter){

_fly = _fly + 1;

}



}



