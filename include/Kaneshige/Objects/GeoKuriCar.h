#ifndef GEOKURICAR_H
#define GEOKURICAR_H

#include "Kaneshige/Objects/GeoCar.h"

class GeoKuriCar : public GeoCar
{ // Autogenerated
    // Global
    GeoKuriCar(const CrsData::SObject &);             // 0x801c1d34
    virtual void reset();                             // 0x801c1e98
    virtual void createColModel(J3DModelData *);      // 0x801c1ecc
    virtual JGeometry::TVec3f *getTirePosOffset(int); // 0x801c1f08
    virtual void hitKart(int);                        // 0x801c1f98
    void initCallBackDeath();                         // 0x801c1fe0
    void doCallBackDeath();                           // 0x801c2020
    // Inline
    virtual ~GeoKuriCar() {}                                            // 0x801c20a8
    virtual char *getBmdFileName() { return "/Objects/Car_Kuri1.bmd"; } // 0x801c2108
    virtual int getVibrationLimitSpeed() { return 0; }                  // 0x801c2114
private:
    static JGeometry::TVec3f sTireOfsTable[4]; // 0x80378f88
    // TODO
}; // class GeoKuriCar
// void GeoCar::clrCarCollision() // GeoCar.h; // 0x801c2010
#endif // GEOKURICAR_H