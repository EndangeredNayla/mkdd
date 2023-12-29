#ifndef JAUBANKTABLE_H
#define JAUBANKTABLE_H

#include "JSystem/JAudio/System/JASGadget.h"
#include "JSystem/JAudio/System/JASBankList.h"
#include "JSystem/JSupport/JSUList.h"

class JASBank;
class JAUBankTable : public JASBankList
{
public:
    JAUBankTable(u32 param_0, JASBank **param_1, u32 param_2) : mBankPtrTable(param_1, param_2)
    {
        field_0xc = param_0;
    }
    JASBank *getBank(u32) const;

    JASBank *getBank(u32 param_0) { return mBankPtrTable.get(param_0); }
    void registBank(u32 param_0, JASBank *param_1) { mBankPtrTable.set(param_0, param_1); }

    JASPtrTable<JASBank> mBankPtrTable; // 04
    u32 field_0xc;
};

class JAUBankTableLink : public JSULink<JAUBankTable>, public JAUBankTable
{
public:
    JAUBankTableLink(u32 param_0, JASBank **param_1, u32 param_2) : JSULink<JAUBankTable>(this), JAUBankTable(param_0, param_1, param_2) {}
};

struct JAUBankTableDictionary : JSUList<JAUBankTable>
{
   void appendBankTable(JSULink<JAUBankTable> *);
};

class JASWaveBank;
class JAUWaveBankTable : private JASPtrArray<JASWaveBank, 255>
{
public:
    JASWaveBank *getWaveBank(u32 index) { return get(index); }
    JASWaveBank *getWaveBank(u32 index) const { return get(index); }
    void registWaveBank(u32 index, JASWaveBank *bank) { set(index, bank); }
};

#endif /* JAUBANKTABLE_H */