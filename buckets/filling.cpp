#include "filling.h"

//method for getting right numbers
void filling::startNewGame(){
    int vol1, vol2, vol3, des, diff;
    //generating random numbers 'till we won't get exceptable ones
    do{
        vol1 = 30 + rand() % 100 + 1;
        des = 10 + rand() % 50 + 1;
        vol2 = 3 + rand() % 20 + 1;
        vol3 = 1 + rand() % 20 + 1;
        diff = vol1 - des;
    }while((vol1 > 100) || (diff < 0) ||((vol2-vol3)==0) || (diff % vol2 != 0) || (diff % vol3 != 0) || (diff % (abs(vol2-vol3)) != 0) || (des == vol1));

    //set them as volumes for our buckets
    this->one->setVolume(vol1);
    this->two->setVolume(vol2);
    this->three->setVolume(vol3);
    this->setDesVolume(des);
}

//constructor of class
filling::filling(int vol1, int vol2, int vol3, int desVol){
    this->one->setVolume(vol1);
    this->two->setVolume(vol2);
    this->three->setVolume(vol3);
    this->desVolume = desVol;
}

//setter of desired volume
void filling::setDesVolume(int volume) {
    this->desVolume = volume;
}

//getter of desired volume
int filling::getDesVolume() {
    return this->desVolume;
}

//method for checking is there a chance
bool filling::check_bool(filling *start){
int diff = start->one->getVolume() - start->desVolume;
    if (   (diff >= 0)
        && ((diff % start->two->getMaxVolume() == 0)
        || (diff % start->three->getMaxVolume() == 0)
        || (diff % (abs(start->two->getMaxVolume()-start->three->getMaxVolume())) == 0)
        || (start->desVolume == start->one->getVolume())))
    return true;
else return false;
}

//method for makeing a good move advice
filling::move filling::get_tip(filling* start){
   move next_move;
   if ((start->one->getVolume() - start->two->getVolume()) >= start->getDesVolume()){
        next_move.from = start->one;
        next_move.to = start->two;
        }
   else if ((start->one->getVolume() - start->three->getVolume()) >= start->getDesVolume()){
       next_move.from = start->one;
       next_move.to = start->three;
   }
   return next_move;
}
