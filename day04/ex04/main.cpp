#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"

int main(void)
{
    IMiningLaser* strip = new StripMiner;
    IMiningLaser* deep = new  DeepCoreMiner;

    MiningBarge barge;

    IAsteroid* kreog = new AsteroKreog;
    IAsteroid* koala = new KoalaSteroid;

    barge.equip(strip);
    barge.equip(strip);
    barge.equip(deep);

    barge.mine(kreog);
    barge.mine(koala);


    return (0);
}