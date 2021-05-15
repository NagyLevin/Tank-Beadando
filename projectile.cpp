#include "projectile.hpp"
#include "graphics.hpp"
#include "iostream"
#include <math.h>
using namespace genv;
using namespace std;

Projectile::Projectile(Window *parent,int x, int y, int sx, int sy, int player, int nagyX,int nagyY,int tankszinR,int tankszinG,int tankszinB) : TankCso(parent,x,y,sx,sy,player,nagyX,nagyY,tankszinR,tankszinG,tankszinB)
{
_ido = 0;


}

void Projectile::draw(){

}








void Projectile::drawprojectile(){

    int r = 5;



        for(int dx = -r; dx<= r; dx++){
    for(int dy =-r; dy<=r;dy++){
        if(dx*dx+dy*dy<=r*r){

            gout << color(_tankszinR/2,_tankszinG/2,_tankszinB/2)<<move_to(_x+dx + _flyX,_y+dy +_flyY/2) <<dot;
            _lovedekX =_x+dx + _flyX;
            _lovedekY = _y+dy +_flyY/2;

        }
    }

}

}

void Projectile::getpangle(double angle,double power){
_angle = angle;
_power = power;

}


void Projectile :: esemeny(event ev){


_flyX = _flyX -  ((_angle/15)*_power)/4 ;
_flyY =  _flyY +  _power/2 -(_ido)/2;
_ido = _ido - 1;






}

int Projectile::givelovedekX(){
return _lovedekX;
}


int Projectile::givelovedekY(){
return _lovedekY;
}
