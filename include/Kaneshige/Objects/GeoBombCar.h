#ifndef GEOBOMBCAR_H
#define GEOBOMBCAR_H

#include "Kaneshige/Objects/GeoCar.h"

class GeoBombCar : public GeoCar
{ // Autogenerated
public:
    GeoBombCar(const CrsData::SObject &);          // 0x801c0914, overide
    virtual void reset();                          // 0x801c0ac0, overide
    virtual void createModel(JKRSolidHeap *, u32); // 0x801c0b2c, overide
    virtual void createColModel(J3DModelData *);   // 0x801c0b94, overide
    virtual TVec3f *getTirePosOffset(int);         // 0x801c0be0, overide
    virtual void loadAnimation();                  // 0x801c0c70, overide
    virtual void setCurrentViewNo(u32);            // 0x801c0cc0, overide
    virtual void update();                         // 0x801c0d20, overide
    virtual void simpleDraw(u32);                  // 0x801c0d64, overide
    virtual void calc();                           // 0x801c0db8, overide
    virtual void hitKart(int);                     // 0x801c0f30, overide
    virtual void hitItemBomb();                    // 0x801c0f8c, overide
    virtual void hitItemWanWan();                  // 0x801c0fc0, overide
    virtual void hitItemGTurtleBig();              // 0x801c0fe8, overide
    virtual void hitItemGTurtle();                 // 0x801c1008, overide
    virtual void hitItemRTurtle();                 // 0x801c1028, overide
    virtual void hitItemFireBall();                // 0x801c1048, overide
    virtual void hitItemYoshiEgg();                // 0x801c1068, overide
    virtual void initCallBackDeath();              // 0x801c1088, overide
    virtual void doCallBackDeath();                // 0x801c115c, overide

    // Inline

    // Inline/Unused
    // void initCallBackMove();
    // static u32 sCreateNum;
    virtual bool isBlast(){/* return _270;*/};                          // 0x801c134c
    virtual ~GeoBombCar() {}                                            // 0x801c12c8
    virtual char *getBmdFileName() { return "/Objects/Car_Bomb1.bmd"; } // 801c1338
    virtual u32 getSoundCarType() const { return 0; }                   // 0x801c1344

private:
    static JGeometry::TVec3f sTireOfsTable[3]; // 0x80378e28
    static s16 sMaxBombReactFrame;             // 0x804146a0
    static J3DAnmTextureSRTKey *sTireBtkAnm;   // 0x80416438
    // TODO
}; // class GeoBombCar

// void JPABaseEmitter::becomeContinuousParticle() // JPABaseEmitter.h; // 0x801c0edc
// void JPABaseEmitter::setGlobalParticleScale(const JGeometry::TVec3<float> &) // JPABaseEmitter.h; // 0x801c0ee8
// void GeographyObj::clrCheckKartHitFlag(int) // GeographyObj.h; // 0x801c0f74
// void JPABaseEmitter::stopCreateParticle() // JPABaseEmitter.h; // 0x801c1110
// void JPABaseEmitter::setStatus(u32) // JPABaseEmitter.h; // 0x801c1134
// void GeographyObj::setBounds(ObjColBase *, unsigned char) // GeographyObj.h; // 0x801c1144
// void BombEffectObj::getBlastBound() const // BombEffectObj.h; // 0x801c1154
// void JPABaseEmitter::playCreateParticle() // JPABaseEmitter.h; // 0x801c128c
// void JPABaseEmitter::clearStatus(u32) // JPABaseEmitter.h; // 0x801c12b0
// void StateObserver::getStateCount() const // StateObserver.h; // 0x801c12c0
#endif // GEOBOMBCAR_H