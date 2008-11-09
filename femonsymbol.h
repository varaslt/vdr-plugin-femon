/*
 * Frontend Status Monitor plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 */

#ifndef __FEMONSYMBOL_H
#define __FEMONSYMBOL_H

#include <vdr/osd.h>

enum eSymbols {
  SYMBOL_STEREO,
  SYMBOL_MONO_LEFT,
  SYMBOL_MONO_RIGHT,
  SYMBOL_DD,
  SYMBOL_DD20,
  SYMBOL_DD51,
  SYMBOL_MPEG2,
  SYMBOL_H264,
  SYMBOL_PAL,
  SYMBOL_NTSC,
  SYMBOL_SVDRP,
  SYMBOL_LOCK,
  SYMBOL_SIGNAL,
  SYMBOL_CARRIER,
  SYMBOL_VITERBI,
  SYMBOL_SYNC,
  SYMBOL_AR_1_1,
  SYMBOL_AR_16_9,
  SYMBOL_AR_2_21_1,
  SYMBOL_AR_4_3,
  SYMBOL_DEVICE,
  SYMBOL_ZERO,
  SYMBOL_ONE,
  SYMBOL_TWO,
  SYMBOL_THREE,
  SYMBOL_FOUR,
  SYMBOL_FIVE,
  SYMBOL_SIX,
  SYMBOL_SEVEN,
  SYMBOL_MAX_COUNT
  };

extern cBitmap bmSymbol[SYMBOL_MAX_COUNT];

#endif // __FEMONSYMBOL_H