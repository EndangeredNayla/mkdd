#ifndef PADMGR_H
#define PADMGR_H

#include "Osako/kartPad.h"
#include "Osako/PadRecorder.h"

namespace PadMgr
{ // Autogenerated
    enum KartPadInput
    { 
        Input_Local,
        Input_Net
    };
    // Global
    void init();                                                 // 0x8020c3ac
    void framework();                                            // 0x8020c438
    void processKartPad();                                       // 0x8020c4bc
    void getPadData(unsigned char, KartPadInput, KartPadData *); // 0x8020c588
    void setKartPadInput(KartPadInput);                          // 0x8020c74c
    void resetPort();                                            // 0x8020c77c

    extern KartPadInput msKartPadInput;                          // 0x80416a50
    extern PadRecorder *mspRecorder;                             // 0x80416a54

    inline void destroy() { mspRecorder = nullptr; }

};                                                               // namespace PadMgr
#endif                                                           // PADMGR_H