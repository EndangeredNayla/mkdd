#ifndef ITEMOBJ_H
#define ITEMOBJ_H

#include <JSystem/JGeometry.h>
#include "Kaneshige/Course/CrsGround.h"
#include "Osako/shadowModel.h"
#include "Sato/ObjCollision.h"

#include "types.h"

// TODO: inlines getters, setters

class ObjColBase;

class ItemObj
{
public:
    enum ItemState
    {
        State0,
        StateEquip, // 1
        State2,
        State3,
        State4,
        StateDivested, // 5

    };

    enum ItemColFlag
    {

    };

    enum cMultiType
    {
        cMultiType_0,
        cMultiType_1,
    };

    struct ItemHandOffsetData
    {
        f32 _0;
        f32 _4;
        f32 _8;
        u16 _c[0x4];
    };

    ItemObj(u32 kind); // 0x8024a2b0

    // Vtable 0x0
    virtual ~ItemObj() {}                                                            // 08
    virtual void calc();                                                             // 0C
    virtual void reset();                                                            // 10
    virtual void update();                                                           // 14
    virtual void viewCalc(u32);                                                      // 18
    virtual void setCurrentViewNo(u32);                                              // 1C
    virtual void drawSimpleModel(u32, f32 (*)[4], J3DUClipper *, f32 (*)[4]);        // 20
    virtual void calcColReaction(ItemObj *);                                         // 24
    virtual const char *getBmdFileName();                                            // 28
    virtual u32 getModelDataAppendLoadFlg() { return 0; }                            // 2C
    virtual void callHitItemSound(ItemObj *);                                        // 30
    virtual int getLockOnKartNo() const { return -1; }                               // 34
    virtual void IsJuggleItem() const;                                               // 38
    virtual f32 getForceEfctOffsetScale() const { return 1.0f; }                     // 3C
    virtual void createModel(JKRSolidHeap *, u32, u32);                              // 40
    virtual void createColModel(J3DModelData *);                                     // 44
    virtual void setCollideAddVel(const JGeometry::TVec3f &, const f32 &);           // 48
    virtual void getItemBoundRatio() const;                                          // 4C
    virtual void doUniv();                                                           // 50
    virtual void initEquip() {}                                                      // 54
    virtual void initRelease() {}                                                    // 58
    virtual void initSpRelease() {}                                                  // 5C
    virtual void initDisappear() {}                                                  // 60
    virtual void initFall();                                                         // 64
    virtual void initDivested() { initmoveDivested(); }                              // 68
    virtual void initOccur(const JGeometry::TVec3f &, const JGeometry::TVec3f &);    // 6C
    virtual void initForceDisappear();                                               // 70
    virtual void initEnd() {}                                                        // 74
    virtual void doEquip() { doHandOneEquip(false, 0.0f); }                          // 78
    virtual void doRelease() {}                                                      // 7C
    virtual void doSpRelease() {}                                                    // 80
    virtual void doDisappear() {}                                                    // 84
    virtual void doFall();                                                           // 88
    virtual void doDivested() { moveDivested(); }                                    // 8C
    virtual void doForceDisappear();                                                 // 90
    virtual void initCommonMoveFallMtx();                                            // 94
    virtual void moveColWall(CrsGround &);                                           // 98
    virtual void moveNormal(CrsGround &) {}                                          // 9C
    virtual void moveRescue(CrsGround &);                                            // A0
    virtual void moveCannon(CrsGround &);                                            // A4
    virtual void deleteEffect();                                                     // A8
    virtual void executeEquipHandFunc() { doHandOneEquip(false, 0.0f); }             // AC
    virtual void checkKartColDisappear(int);                                         // B0
    virtual void selectSucChild();                                                   // B4
    virtual void doSucReleaseFunc(ItemObj *);                                        // B8
    virtual void doSucSpReleaseFunc(ItemObj *);                                      // BC
    virtual void IsHitKart(int, const JGeometry::TVec3f &, f32);                     // C0
    virtual void IsHitObject(ObjColBase *, const JGeometry::TVec3f &, ObjColBase *); // C4
    virtual void executeGeoObjHitCallBack(GeographyObj *);                           // C8

    void loadmodel(J3DModelData *);                                           // 0x8024a4a4
    void initHeartDisappear();                                                // 0x8024a7c8
    static const char *getShadowBmdFileName(u8);                              // 0x8024a868
    void loadshadowmodel(J3DModelData *);                                     // 0x8024a8a4
    void doStateUniv();                                                       // 0x8024a930
    void doDeleteList();                                                      // 0x8024a958
    void setStateEquip(bool, bool);                                           // 0x8024a9a4
    void setStateHeartWaiting(u8);                                            // 0x8024ab6c
    void setStateRelease(bool);                                               // 0x8024ac04
    void setStateSpRelease(bool);                                             // 0x8024ace4
    void setStateFall(bool);                                                  // 0x8024ada4
    void setStateOccur(const JGeometry::TVec3f &, const JGeometry::TVec3f &); // 0x8024aed0
    void setStateDivested(bool);                                              // 0x8024af94
    void setStateDisappear(bool);                                             // 0x8024b33c
    void setStateForceDisappear();                                            // 0x8024b428
    bool tstAnyObjectHitting();                                               // 0x8024b4ec
    void doSucStateFunc(ItemState);                                           // 0x8024b52c
    void disappearAllChild(bool);                                             // 0x8024bd50
    int getSuccessionItemNum();                                               // 0x8024bebc
    void setChildStateRelease();                                              // 0x8024bed8
    void setChildStateSpRelease();                                            // 0x8024befc
    void setChildStateFall();                                                 // 0x8024bf20
    void setChildStateForceDisappear();                                       // 0x8024bf44
    void calcDarkRatio();                                                     // 0x8024c194
    void checkPriorityNormal();                                               // 0x8024c2bc
    void checkPrioritySpecial();                                              // 0x8024c348
    void createSoundMgr();                                                    // 0x8024c458
    void createBoundSphere(J3DModelData *);                                   // 0x8024c4b0
    void createBoundSphere(f32, f32);                                         // 0x8024c52c
    void createBoundCylinder(J3DModelData *);                                 // 0x8024c59c
    void getVelStickXThrow(JGeometry::TVec3f *, f32, f32);                    // 0x8024c624
    void createShadowModel(JKRSolidHeap *, u32, u32);                         // 0x8024c708
    void setModelMatrixAndScale(Quaternion);                                  // 0x8024c7c0
    void setModelMatrixAndScale(f32 (*)[4]);                                  // 0x8024c868
    void setScaleCol(f32);                                                    // 0x8024c914
    void resetObject();                                                       // 0x8024c934
    void resetNoColParam();                                                   // 0x8024cbe0
    void clearAllFlg();                                                       // 0x8024cbf8
    void chkSetFlgByKind();                                                   // 0x8024cc2c
    void getModelLfDir(JGeometry::TVec3f *);                                  // 0x8024cc9c
    void getModelUpDir(JGeometry::TVec3f *);                                  // 0x8024ccb8
    void getModelFrDir(JGeometry::TVec3f *);                                  // 0x8024ccd4
    void rotationRad(f32 &, f32);                                             // 0x8024ccf0
    void QuatRotX(f32, Quaternion *);                                         // 0x8024cd40
    void QuatRotY(f32, Quaternion *);                                         // 0x8024cd84
    void IsSpecialItem(int);                                                  // 0x8024cdc8
    void getCompVecLength(JGeometry::TVec3f &, f32 &);                        // 0x8024cdf8
    void setFrameNoColKart(u8, bool);                                         // 0x8024ced0
    void doFrameNoColKart();                                                  // 0x8024cfa0
    void calcColPos();                                                        // 0x8024d12c
    void checkStartColItemFrame(u32);                                         // 0x8024d34c
    void doHandOneEquip(bool, f32);                                           // 0x8024d368
    void doPosLerp(JGeometry::TVec3f *, const JGeometry::TVec3f &, f32);      // 0x8024d5c4
    void doRotationLerp(JGeometry::TPos3f *, f32 (*)[4], f32);                // 0x8024d6a4
    void doEquipScaleUp(f32);                                                 // 0x8024d72c
    void executeEquipScaleUp(u32, f32);                                       // 0x8024d7ec
    void doForceDisappearScaleDown();                                         // 0x8024d870
    void calcEquipAnmScaleUp(JGeometry::TVec3f &, u32);                       // 0x8024d8d0
    void calcForceDisappearScaleDown(JGeometry::TVec3f &, u32);               // 0x8024d948
    void doReflectGeoObj(GeographyObj *, f32);                                // 0x8024d9b4
    void doMovePos();                                                         // 0x8024dd7c
    void doGeoObjectCol(GeographyObj *);                                      // 0x8024ddb4
    void initmoveDivested();                                                  // 0x8024df9c
    void moveDivested();                                                      // 0x8024e040
    void initmoveFall();                                                      // 0x8024e228
    void initCommonMoveFall(const JGeometry::TVec3f &);                       // 0x8024e3c4
    void moveFall();                                                          // 0x8024e558
    void doHeartWaiting();                                                    // 0x8024e880
    void doFallScaling();                                                     // 0x8024e8dc
    void colItemReflect(ItemObj *, ItemObj *, ItemColFlag, ItemColFlag);      // 0x8024e93c
    void doColMoveReflect(JGeometry::TVec3f, f32);                            // 0x8024eba8
    void doColMoveReflectAndStopDisappear(JGeometry::TVec3f, f32);            // 0x8024ecdc
    void doColMoveJumpDown(JGeometry::TVec3f, f32);                           // 0x8024ef28
    void doColMoveReflectJumpDownAndDisappear(JGeometry::TVec3f, f32);        // 0x8024ef64
    void doColMoveCommonJumpAndReflect(JGeometry::TVec3f, f32, bool);         // 0x8024f0d4
    MtxPtr getHandAnmMtx();                                                     // 0x8024f3f8
    void getJuggleHandAnmMtx();                                               // 0x8024f4fc
    void IsAlwaysColItemToKart();                                             // 0x8024f600
    void initMoveColGround();                                                 // 0x8024f628
    void doMoveColGround(Quaternion *, bool);                                 // 0x8024f654
    void moveCommonAttr(CrsGround &, bool);                                   // 0x8024fa7c
    void simpleDraw(u32, f32 (*)[4], u32);                                    // 0x8025019c
    void setMultiType(cMultiType);                                            // 0x802501f8
    static cMultiType getCharaMultiType(int, u8);                             // 0x80250224
    void doMoveGndParallel(const JGeometry::TVec3f &, f32);                   // 0x80250364
    void initThrowVel(f32, f32, f32);                                         // 0x802505f4
    void setInitThrowDir(JGeometry::TVec3f *, f32, bool);                     // 0x8025098c
    void setVelUpDown(f32, f32);                                              // 0x80250a50
    void setVelMax();                                                         // 0x80250b1c
    void calcVelUpDown(f32);                                                  // 0x80250b78
    void calcGndNormal(JGeometry::TVec3f *, CrsGround &, f32, f32);           // 0x80250c44
    void calcBananaFirstQuat(const JGeometry::TVec3f &);                      // 0x80250d48
    void calcScale(f32, f32, f32);                                            // 0x80250e98
    void calcAllUseInitVel(u8, f32);                                          // 0x8025117c
    void callHitKartSound(int);                                               // 0x80251260
    void getSpecialKind(const int &, const u8 &);                             // 0x802512dc
    void getItemRnd();                                                        // 0x8025146c
    void setHandOffsetData();                                                 // 0x80251490
    void setHandOffsetPos(ItemHandOffsetData *);                              // 0x80251588
    void getHandOffsetPos();                                                  // 0x802515ac
    void getThunderScale();                                                   // 0x802515e4
    void initMaxDivestedFrame();                                              // 0x802516bc

    static f32 sDivestedGravity;      // 0x80414af8
    static u8 sDivestedFrame;         // 0x80414afc
    static u8 sTransferFrame;         // 0x80414afd
    static f32 sFrontEquipScaleRatio; // 0x80414b00

    void setOwnerNum(int newOwnerNum) { mOwnerNum = newOwnerNum; }
    int getOwnerNum() const { return mOwnerNum; }
    void setOrigOwnerNum(int newOwnerNum) { mOrigOwnerNum = newOwnerNum; }
    int getState() const { return mState; }
    int getKartReaction() const { return mKartReaction; }
    int getDirectHitKartNo() const { return mDirectHitKartNo; }
    u8 getDriverNum() const { return mDriverNum; }
    void setDriverNum(u8 newDriverNum) { mDriverNum = newDriverNum; }
    void setOrigDriverNum(u8 newDriverNum) { mOrigDriverNum = newDriverNum; }
    u32 getKind() const { return mItemKind; }
    const u8 getColorID() const { return mColorID; } // is extra const needed? fixes instruction swaps in ItemHeart.cpp
    u32 getItemID() const
    {
        if (mItemKind == 21)
            return 9;
        return mItemKind;
    }

    void clrTransferPartner() { mTransferFlags &= ~0x200; }
    void setTransferPartner() { mTransferFlags |= 0x200; }

    // Inline/Unused
    void combMtxOn();
    void combMtxOff();
    void getVelStickYThrow(JGeometry::TVec3f *, f32, f32);
    void getVelStickXYThrow(JGeometry::TVec3f *, f32, f32);
    void setModelMatrixAndScale();
    void setAnmScaleCol(f32, JGeometry::TVec3f);
    void QuatRotZ(f32, Quaternion *);
    void getReflectVec(JGeometry::TVec3f, JGeometry::TVec3f, JGeometry::TVec3f *);
    void doReflectItemObj(ItemObj *);
    void setInitFallCommonFlg(const JGeometry::TVec3f &);
    void chkIsAvailableColDisappear();
    void checkIsHitBack(JGeometry::TVec3f, int);
    void checkVelYMax(f32);
    void moveOnNormalFall(CrsGround &);
    // static f32 sDivPosLerpValue;

    // Inline
    bool IsSuccessionItem() { return mItemKind > 0x10; }                        // 0x8024b30c
    bool IsSuccessionChildItem() { return mSuccessionItemLink.getList() != 0; } // 0x8024b324
    void doOccur() { doFall(); }                                                // 0x8024af68, ptmf shit

    // private:

    typedef void (ItemObj::*StateFunc)();

    JGeometry::TVec3f mPos;               // 04
    JGeometry::TVec3f _10;                //
    JGeometry::TVec3f _1c;                //
    f32 _28;                              //
    f32 _2c;                              //
    f32 _30;                              //
    Quaternion _34;                       //
    Quaternion _44;                       //
    f32 _54;                              //
    JGeometry::TVec3f mDisScaleAnm;       // 58
    f32 mEquipScale;                      // 64
    u8 _68[0x70 - 0x68];                  //
    JGeometry::TVec3f mVel;               // 70
    u32 mItemKind;                        // 7c
    ExModel mModel;                       // 80
    ShadowModel *mShadow;                 // 10c
    ObjColBase *mBounds;                  // 110
    u8 _114[0x118 - 0x114];               //
    int mState;                           // 118
    u8 _11c[0x120 - 0x11c];               //
    int mOwnerNum;                        // 120
    u8 mDriverNum;                        // 124
    MtxPtr mpHandAnmMtx;                  // 128
    u32 _12c;                             //
    u16 mTransferFlags;                   // 130   
    u8 _132[0x138 - 0x132];               //
    u32 mEquipFlags;                      // 138
    u8 _13c[0x140 - 0x13c];               //
    int mKartReaction;                    // 140 probably an enum
    StateFunc mStateFunc;                 // 144
    JSULink<ItemObj> _150;                // 150
    JSULink<ItemObj> _160;                // 160
    JSULink<ItemObj> _170;                // 170
    JSULink<ItemObj> _180;                // 180
    JSULink<ItemObj> mMiniGameLink;       // 190
    u32 mSucKind;                         // 1a0
    JSUList<ItemObj> _1a4;                // 1a4
    JSULink<ItemObj> mSuccessionItemLink; // 1b0
    ItemObj *_1c0;                        // 1c0, probably ItemObjSuc
    int mOrigOwnerNum;                    // 1c4
    u8 mOrigDriverNum;                    // 1c8
    u8 _1c9[0x1fc - 0x1c9];               //
    u8 _1fc;                              //
    u8 _1fd[0x210 - 0x1fd];               //
    Mtx _210;                             //
    u8 _240[0x24c - 0x240];               //
    u8 _24c;                              //
    u8 _24d[0x28c - 0x24d];               //
    int mDirectHitKartNo;                 // 28c
    u8 _290[0x298 - 0x290];               //
    u8 mColorID;                          // 298
    u8 _299[0x2b0 - 0x299];               //
}; // 2b0

#endif