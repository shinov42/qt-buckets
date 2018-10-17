#ifndef BUCKET_H
#define BUCKET_H

class bucket
{

    private:
        int nowVolume;
        int maxVolume;
    public:

        bucket(int);

       //method used for refilling water from *this* bucket
        void refill(bucket*);

        //method used for putting water into *this* bucket
        void refilling(int);

        //getter of nowVolume
        int getVolume();

        //getter of maxVolume
        int getMaxVolume();

        //setter of volume
        void setVolume(int);
};

#endif // BUCKET_H
