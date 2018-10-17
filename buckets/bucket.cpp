#include "bucket.h"

bucket::bucket(int volume){
    this->maxVolume = volume;
    this->nowVolume = volume;
}

//method used for refilling water from *this* bucket to bucket *b*
void bucket::refill(bucket *b) {
    int temp = this->nowVolume - b->getVolume();
    if (temp >= 0)
            this->nowVolume = temp;
}

//getter of Maximum volume
int bucket::getMaxVolume(){
    return this->maxVolume;
}

//getter of *this* bucket's nowVolume
int bucket::getVolume() {
    return this->nowVolume;
}

//adding water from bucket to another
void bucket::refilling(int volume){
    if ((this->getVolume() + volume) < this->getMaxVolume())
    this->nowVolume += volume;
}

//setter of maxVol and nowVol
void bucket::setVolume(int volume){
    this->maxVolume = volume;
    this->nowVolume = volume;
}
