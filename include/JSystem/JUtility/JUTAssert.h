#ifndef JUTASSERT_H
#define JUTASSERT_H

#include "types.h"

class JUTAssertion {
public:
    static u32 getSDevice(void);
    static void showAssert_f(u32 device, char const * file, int line, char const * errormsg, ...);
    static void showAssert(u32 device, char const *file, int line, char const *errormsg); /* {
      showAssert_f(device, file, line, "%s", errormsg);
  }*/
};

#define JUT_ASSERT(LINE, COND)                                                   \
  if (!COND)                                                                     \
  {                                                                              \
    JUTAssertion::showAssert(JUTAssertion::getSDevice(), __FILE__, LINE, #COND); \
    OSPanic(__FILE__, LINE, "Halt");                                             \
  }

#define JUT_ASSERT_F(LINE, COND, ...)                                                    \
  if (!COND)                                                                             \
  {                                                                                      \
    JUTAssertion::showAssert_f(JUTAssertion::getSDevice(), __FILE__, LINE, __VA_ARGS__); \
    OSPanic(__FILE__, LINE, "Halt");                                                     \
  }

#define JUT_PANIC(LINE, TEXT)                                                 \
  JUTAssertion::showAssert(JUTAssertion::getSDevice(), __FILE__, LINE, TEXT); \
  OSPanic(__FILE__, LINE, "Halt");

#define JUT_RANGE_ASSERT(LINE, min, cur, max) \
  JUT_ASSERT_F(LINE, (((cur) >= (min)) && ((cur) < (max))) != false, "range over: %d <= " #cur "=%d < %d", (min), (cur), (max))

#endif