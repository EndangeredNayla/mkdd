#include "Kaneshige/KartInfo.h"
#include "Dolphin/OS.h"
#include "JSystem/JUtility/JUTAssert.h"

const KartInfo::SCharDB KartInfo::cBabyMarioCharDB = {
    BABY_MARIO,
    BABY_LUIGI,
    0,
    GOO_GOO_BUGGY,
    1,
    0
};
const KartInfo::SCharDB KartInfo::cBabyLuigiCharDB = {
    BABY_LUIGI, 
    BABY_MARIO, 
    0, 
    RATTLE_BUGGY, 
    2,
    0
};
    const KartInfo::SCharDB KartInfo::cPatapataCharDB = {
        PARATROOPA,
        KOOPATROOPA,
        0,
        PARA_WING,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cNokonokoCharDB = {                
        KOOPATROOPA,
        PARATROOPA,
        0,
        KOOPA_DASHER,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cPeachCharDB = {
        PEACH,
        DAISY,
        1,
        HEART_COACH,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cDaisyCharDB = {                
        DAISY,
        PEACH,
        1,
        BLOOM_COACH,
        0,
        0
    };
    const KartInfo::SCharDB KartInfo::cMarioCharDB = {
        MARIO,
        LUIGI,
        1,
        RED_FIRE,
        0,
        0
    };
    const KartInfo::SCharDB KartInfo::cLuigiCharDB = {       
        LUIGI,
        MARIO,
        1,
        GREEN_FIRE,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cWarioCharDB = {
        WARIO,
        WALUIGI,        
        2,
        WARIO_CAR,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cWaluigiCharDB = {
        WALUIGI,
        WARIO,
        1,
        WALUIGI_RACER,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cDonkeyCharDB = {
        DONKEYKONG,
        DONKEYJR,
        2,
        DK_JUMBO,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cDonkeyJrCharDB = {
        DONKEYJR,
        DONKEYKONG,
        0,
        BARREL_TRAIN,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cYoshiCharDB = {
        YOSHI,
        BIRDO,
        1,
        TURBO_YOSHI,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cCatherineCharDB = {
        BIRDO,
        YOSHI,
        1,
        TURBO_BIRDO,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cKoopaCharDB = {
        BOWSER,
        BOWSERJR,
        2,
        KOOPA_KING,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cKoopaJrCharDB = {
        BOWSERJR,
        BOWSER,
        0,
        BULLET_BLASTER,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cKinopioCharDB = {
        TOAD,
        TOADETTE,
        0,
        TOAD_KART,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cKinopicoCharDB = {
        TOADETTE,
        TOAD,
        0,
        TOADETTE_KART,
        2,
        0
    };
    const KartInfo::SCharDB KartInfo::cKingTeresaCharDB = {
        KING_BOO,
        PETEY,
        2,
        BOO_PIPES,
        1,
        0
    };
    const KartInfo::SCharDB KartInfo::cBossPakkunCharDB = {
        PETEY,
        KING_BOO,
        2,
        PIRANHA_PIPES,
        1,
        0
    };

const KartInfo::SKartDB KartInfo::cMustacheKartDB = {
    RED_FIRE,
    1,
    4,
    0,
    MARIO,
    0
};
const KartInfo::SKartDB KartInfo::cMonkeyKartDB = {
    DK_JUMBO,
    2,
    4,
    1,
    DONKEYKONG,
    0
};
const KartInfo::SKartDB KartInfo::cLizardKartDB = {
    TURBO_YOSHI,
    1,
    4,
    0,
    YOSHI,
    0
};
const KartInfo::SKartDB KartInfo::cSmallFishKartDB = {
    KOOPA_DASHER,
    0,
    4,
    2,
    KOOPATROOPA,
    0
};
const KartInfo::SKartDB KartInfo::cPrincessKartDB = {
    HEART_COACH,
    1,
    4,
    0,
    PEACH,
    0
};
const KartInfo::SKartDB KartInfo::cChildKartDB = {
    GOO_GOO_BUGGY,
    0,
    4,
    0,
    BABY_MARIO,
    0
};
const KartInfo::SKartDB KartInfo::cBadKartDB = {
    WARIO_CAR,
    2,
    4,
    2,
    WARIO,
    0
};
const KartInfo::SKartDB KartInfo::cSatanKartDB = {
    KOOPA_KING,
    2,
    6,
    2,
    BOWSER,
    0
};
const KartInfo::SKartDB KartInfo::cLuigiKartDB = {
    GREEN_FIRE,
    1,
    4,
    0,
    LUIGI,
    0
};
const KartInfo::SKartDB KartInfo::cDiddyKartDB = {
    BARREL_TRAIN,
    0,
    6,
    0,
    DONKEYJR,
    0
};
const KartInfo::SKartDB KartInfo::cCatherineKartDB = {
    TURBO_BIRDO,
    1,
    4,
    0,
    BIRDO,
    0
};
const KartInfo::SKartDB KartInfo::cPatapataKartDB = {
    PARA_WING,
    0,
    4,
    2,
    PARATROOPA,
    0
};
const KartInfo::SKartDB KartInfo::cDaisyKartDB = {
    BLOOM_COACH,
    1,
    4,
    0,
    DAISY,
    0
};
const KartInfo::SKartDB KartInfo::cBabyLuigiKartDB = {
    RATTLE_BUGGY,
    0,
    4,
    0,
    BABY_LUIGI,
    0
};
const KartInfo::SKartDB KartInfo::cWaluigiKartDB = {
    WALUIGI_RACER,
    1,
    4,
    0,
    WALUIGI,
    0
};
const KartInfo::SKartDB KartInfo::cKoopaJrKartDB = {
    BULLET_BLASTER,
    0,
    4,
    2,
    BOWSERJR,
    0
};
const KartInfo::SKartDB KartInfo::cKinopioKartDB = {
    TOAD_KART,
    0,
    4,
    0,
    TOAD,
    0
};
const KartInfo::SKartDB KartInfo::cKinopicoKartDB = {
    TOADETTE_KART,
    0,
    4,
    0,
    TOADETTE,
    0
};
const KartInfo::SKartDB KartInfo::cKingTeresaKartDB = {
    BOO_PIPES,
    2,
    4,
    0,
    KING_BOO,
    0
};
const KartInfo::SKartDB KartInfo::cBossPakkunKartDB = {
    PIRANHA_PIPES,
    2,
    4,
    2,
    PETEY,
    0
};
const KartInfo::SKartDB KartInfo::cBonusKartDB = {
    PARADE_KART,
    2,
    4,
    0,
    NONE,
    0
};

KartInfo::KartInfo() {
    reset();
}

void KartInfo::reset() {
    kartDB = 0;
    s32 charCount = 2;
    for (s32 i = 0; i < charCount; i++) {
        kartCharacter[i].reset();
    }
    kartType = 0;
}

KartInfo::~KartInfo() { 
    // destructor gets autogenerated
}

void KartInfo::setDriver(int driverNo, ECharID charID, KartGamePad * gamePad) {
    bool assertFlag = false;
    if((driverNo >= 0) && (driverNo < 2))
        assertFlag = true;
            
    if(!assertFlag) {
        JUTAssertion::showAssert_f(JUTAssertion::getSDevice(), "KartInfo.cpp", 632, "range over: %d <= driverNo=%d < %d", 0, driverNo, 2);
        OSPanic("KartInfo.cpp", 632, "Halt");
    }
    kartCharacter[driverNo].reset();
    kartCharacter[driverNo].setPad(gamePad); 
    kartCharacter[driverNo].setCharDB(getCharDB(charID));    
}

const KartInfo::SCharDB * KartInfo::getCharDB(ECharID charID) {
    const SCharDB * charDB = 0;
    switch (charID)
    {
        case BABY_MARIO:
            charDB = &cBabyMarioCharDB;
            break;
        case BABY_LUIGI:
            charDB = &cBabyLuigiCharDB;
            break;
        case PARATROOPA:
            charDB = &cPatapataCharDB;
            break;
        case KOOPATROOPA:
            charDB = &cNokonokoCharDB;
            break;
        case PEACH:
            charDB = &cPeachCharDB;
            break;
        case DAISY:
            charDB = &cDaisyCharDB;
            break;
        case MARIO:
            charDB = &cMarioCharDB;
            break;
        case LUIGI:
            charDB = &cLuigiCharDB;
            break;
        case WARIO:
            charDB = &cWarioCharDB;
            break;
        case WALUIGI:
            charDB = &cWaluigiCharDB;
            break;
        case YOSHI:
            charDB = &cYoshiCharDB;
            break;
        case BIRDO:
            charDB = &cCatherineCharDB;
            break;
        case DONKEYKONG:
            charDB = &cDonkeyCharDB;
            break;
        case DONKEYJR:
            charDB = &cDonkeyJrCharDB;
            break;
        case BOWSER:
            charDB = &cKoopaCharDB;
            break;
        case BOWSERJR:
            charDB = &cKoopaJrCharDB;
            break;
        case TOAD:
            charDB = &cKinopioCharDB;
            break;
        case TOADETTE:
            charDB = &cKinopicoCharDB;
            break;
        case KING_BOO:
            charDB = &cKingTeresaCharDB;
            break;
        case PETEY:
            charDB = &cBossPakkunCharDB;
            break;
    }
    return charDB;
}

const KartInfo::SKartDB * KartInfo::getKartDB(EKartID kartID) {
    const SKartDB * kartDB = 0;
    switch (kartID)
    {
        case RED_FIRE:
            kartDB = &cMustacheKartDB;
            break;
        case DK_JUMBO:
            kartDB = &cMonkeyKartDB;
            break;
        case TURBO_YOSHI:
            kartDB = &cLizardKartDB;
            break;
        case KOOPA_DASHER:
            kartDB = &cSmallFishKartDB;
            break;
        case HEART_COACH:
            kartDB = &cPrincessKartDB;
            break;
        case GOO_GOO_BUGGY:
            kartDB = &cChildKartDB;
            break;
        case WARIO_CAR:
            kartDB = &cBadKartDB;
            break;
        case KOOPA_KING:
            kartDB = &cSatanKartDB;
            break;
        case GREEN_FIRE:
            kartDB = &cLuigiKartDB;
            break;
        case BARREL_TRAIN:
            kartDB = &cDiddyKartDB;
            break;
        case TURBO_BIRDO:
            kartDB = &cCatherineKartDB;
            break;
        case PARA_WING:
            kartDB = &cPatapataKartDB;
            break;
        case BLOOM_COACH:
            kartDB = &cDaisyKartDB;
            break;
        case RATTLE_BUGGY:
            kartDB = &cBabyLuigiKartDB;
            break;
        case WALUIGI_RACER:
            kartDB = &cWaluigiKartDB;
            break;
        case BULLET_BLASTER:
            kartDB = &cKoopaJrKartDB;
            break;
        case TOAD_KART:
            kartDB = &cKinopioKartDB;
            break;
        case TOADETTE_KART:
            kartDB = &cKinopicoKartDB;
            break;
        case BOO_PIPES:
            kartDB = &cKingTeresaKartDB;
            break;
        case PIRANHA_PIPES:
            kartDB = &cBossPakkunKartDB;
            break;
        case PARADE_KART:
            kartDB = &cBonusKartDB;
            break;
    }
    return kartDB;
}
