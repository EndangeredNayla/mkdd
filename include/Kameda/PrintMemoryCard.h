#ifndef PRINTMEMORYCARD_H
#define PRINTMEMORYCARD_H

#include <JSystem/JKernel/JKRHeap.h>

class PrintMemoryCard
{
    // Global
public:
    PrintMemoryCard(JKRHeap *heap); // 0x8016be58

    enum MessageID {

    };
    
    void reset();                   // 0x8016bf24
    void init(MessageID);           // 0x8016bf90
    void changeMessage();           // 0x8016bfac
    void draw();                    // 0x8016c3e0
    void calc();                    // 0x8016c410
    void closeWindow();             // 0x8016c92c
    void closeWindowNoSe();         // 0x8016c9f8
    void setBmgPtr();               // 0x8016ca9c
    void isMessage();               // 0x8016cb0c
    void getChoiceType();           // 0x8016cb98
    void getWindowSize();           // 0x8016cc34
    void getWindowColor();          // 0x8016cd00
    // Inline/Unused
    // void initWindow();
    // ~PrintMemoryCard();
private:
    // TODO
};

#endif // PRINTMEMORYCARD_H
