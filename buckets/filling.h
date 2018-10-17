#ifndef FILLING_H
#define FILLING_H
#include "bucket.h"
#include <math.h>
#include <list>

class filling
{
private:
    int desVolume;

public:

    //constructor of class
    filling(int, int, int, int);

    //buckets with pre-set volume 0
    bucket *one = new bucket(0);
    bucket *two = new bucket(0);
    bucket *three = new bucket(0);

    //struct used for getting tips
    struct move{
        //from which bucket to which
        bucket *from = nullptr;
        bucket *to = nullptr;
    };

   //makes a good move
   move get_tip(filling*);

   //starts the whole system
   void startNewGame();

   //checks if there's still a chance
   bool check_bool(filling*);

   //setter of desired volume
   void setDesVolume(int);

   //getter of desired volume
   int getDesVolume();

};


#endif // FILLING_H
