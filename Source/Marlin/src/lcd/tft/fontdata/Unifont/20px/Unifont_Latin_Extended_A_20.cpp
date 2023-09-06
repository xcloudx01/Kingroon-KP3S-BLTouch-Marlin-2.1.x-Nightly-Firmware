/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// Unifont Latin Extended-A 32pt, capital 'A' height: 20px, width: 100%, range: 0x0100-0x017f
extern const uint8_t Unifont_Latin_Extended_A_20[7160] = {
  129,20,0,1,127,1,28,252, // unifont_t
  // 0x0100  Ā
  12,26,52,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0101  ā
  12,22,44,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,0,48,0,48,63,240,63,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0102  Ă
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0103  ă
  12,26,52,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,0,48,0,48,63,240,63,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0104  Ą
  14,24,48,16,2,252,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,0,192,0,192,0,60,0,60,
  // 0x0105  ą
  14,20,40,16,2,252,63,192,63,192,192,48,192,48,0,48,0,48,63,240,63,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,0,192,0,192,0,60,0,60,
  // 0x0106  Ć
  12,28,56,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0107  ć
  12,24,48,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0108  Ĉ
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0109  ĉ
  12,24,48,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x010a  Ċ
  12,28,56,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x010b  ċ
  12,24,48,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x010c  Č
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x010d  č
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x010e  Ď
  12,28,56,16,2,0,195,0,195,0,60,0,60,0,0,0,0,0,0,0,0,0,255,0,255,0,192,192,192,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,192,192,192,255,0,255,0,
  // 0x010f  ď
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,48,0,48,0,48,0,48,0,48,0,48,63,48,63,48,192,240,192,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0110  Đ
  14,20,40,16,0,0,63,192,63,192,48,48,48,48,48,12,48,12,48,12,48,12,255,12,255,12,48,12,48,12,48,12,48,12,48,12,48,12,48,48,48,48,63,192,63,192,
  // 0x0111  đ
  14,22,44,16,2,0,0,48,0,48,3,252,3,252,0,48,0,48,63,48,63,48,192,240,192,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0112  Ē
  12,26,52,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0113  ē
  12,22,44,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0114  Ĕ
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0115  ĕ
  12,24,48,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0116  Ė
  12,28,56,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0117  ė
  12,24,48,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0118  Ę
  12,24,48,16,2,252,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,3,0,3,0,0,240,0,240,
  // 0x0119  ę
  12,20,40,16,2,252,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,12,0,12,0,3,192,3,192,
  // 0x011a  Ě
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x011b  ě
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x011c  Ĝ
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,195,240,195,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x011d  ĝ
  12,28,56,16,2,252,15,0,15,0,48,192,48,192,0,0,0,0,0,48,0,48,63,48,63,48,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,48,0,48,0,63,192,63,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x011e  Ğ
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,195,240,195,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x011f  ğ
  12,30,60,16,2,252,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,0,48,0,48,63,48,63,48,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,48,0,48,0,63,192,63,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0120  Ġ
  12,28,56,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,195,240,195,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0121  ġ
  12,28,56,16,2,252,12,0,12,0,12,0,12,0,0,0,0,0,0,48,0,48,63,48,63,48,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,48,0,48,0,63,192,63,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0122  Ģ
  12,24,48,16,2,252,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,195,240,195,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,3,0,3,0,60,0,60,0,
  // 0x0123  ģ
  12,28,56,16,2,252,3,192,3,192,12,0,12,0,0,0,0,0,0,48,0,48,63,48,63,48,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,48,0,48,0,63,192,63,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0124  Ĥ
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0125  ĥ
  12,28,56,16,2,0,60,0,60,0,195,0,195,0,0,0,0,0,192,0,192,0,192,0,192,0,192,0,192,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0126  Ħ
  16,20,40,16,0,0,48,12,48,12,48,12,48,12,255,255,255,255,48,12,48,12,48,12,48,12,63,252,63,252,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,
  // 0x0127  ħ
  14,22,44,16,0,0,48,0,48,0,255,0,255,0,48,0,48,0,51,240,51,240,60,12,60,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,
  // 0x0128  Ĩ
  12,28,56,16,2,0,60,48,60,48,195,192,195,192,0,0,0,0,0,0,0,0,63,240,63,240,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,
  // 0x0129  ĩ
  12,24,48,16,2,0,60,48,60,48,195,192,195,192,0,0,0,0,0,0,0,0,15,0,15,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,
  // 0x012a  Ī
  10,26,52,16,4,0,255,0,255,0,0,0,0,0,0,0,0,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x012b  ī
  10,22,44,16,4,0,255,0,255,0,0,0,0,0,0,0,0,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x012c  Ĭ
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,63,240,63,240,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,
  // 0x012d  ĭ
  12,24,48,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,15,0,15,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,
  // 0x012e  Į
  10,24,48,16,4,252,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,3,192,3,192,
  // 0x012f  į
  10,26,52,16,4,252,12,0,12,0,12,0,12,0,0,0,0,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,3,192,3,192,
  // 0x0130  İ
  10,28,56,16,4,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x0131  ı
  10,16,32,16,4,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x0132  Ĳ
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,0,48,0,48,0,48,0,48,192,48,192,48,63,192,63,192,
  // 0x0133  ĳ
  10,28,56,16,4,252,192,192,192,192,192,192,192,192,0,0,0,0,0,0,0,0,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,60,192,60,192,0,192,0,192,192,192,192,192,63,0,63,0,
  // 0x0134  Ĵ
  14,28,56,16,2,0,3,192,3,192,12,48,12,48,0,0,0,0,0,0,0,0,15,252,15,252,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,192,192,192,192,192,192,192,192,63,0,63,0,
  // 0x0135  ĵ
  12,28,56,16,2,252,3,192,3,192,12,48,12,48,0,0,0,0,0,0,0,0,3,192,3,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,195,0,195,0,60,0,60,0,
  // 0x0136  Ķ
  14,24,48,16,0,252,48,12,48,12,48,48,48,48,48,192,48,192,51,0,51,0,60,0,60,0,60,0,60,0,51,0,51,0,48,192,48,192,48,48,48,48,48,12,48,12,12,0,12,0,240,0,240,0,
  // 0x0137  ķ
  14,26,52,16,0,252,48,0,48,0,48,0,48,0,48,0,48,0,48,48,48,48,48,192,48,192,51,0,51,0,60,0,60,0,51,0,51,0,48,192,48,192,48,48,48,48,48,12,48,12,12,0,12,0,240,0,240,0,
  // 0x0138  ĸ
  12,16,32,16,2,0,192,48,192,48,192,192,192,192,195,0,195,0,252,0,252,0,252,0,252,0,195,0,195,0,192,192,192,192,192,48,192,48,
  // 0x0139  Ĺ
  12,28,56,16,2,0,15,0,15,0,240,0,240,0,0,0,0,0,0,0,0,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x013a  ĺ
  10,28,56,16,4,0,15,0,15,0,240,0,240,0,0,0,0,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x013b  Ļ
  12,24,48,16,2,252,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,3,0,3,0,60,0,60,0,
  // 0x013c  ļ
  10,26,52,16,4,252,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,240,0,240,0,
  // 0x013d  Ľ
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x013e  ľ
  10,28,56,16,4,0,195,0,195,0,60,0,60,0,0,0,0,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x013f  Ŀ
  12,20,40,16,2,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,192,192,192,192,192,192,192,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0140  ŀ
  10,22,44,16,2,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,192,12,192,12,192,12,192,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x0141  Ł
  14,20,40,16,0,0,48,0,48,0,48,0,48,0,48,192,48,192,51,0,51,0,60,0,60,0,240,0,240,0,48,0,48,0,48,0,48,0,48,0,48,0,63,252,63,252,
  // 0x0142  ł
  10,22,44,16,4,0,60,0,60,0,12,0,12,0,12,0,12,0,12,192,12,192,15,0,15,0,60,0,60,0,204,0,204,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x0143  Ń
  12,28,56,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,192,48,192,48,240,48,240,48,240,48,240,48,204,48,204,48,204,48,204,48,195,48,195,48,195,48,195,48,192,240,192,240,192,240,192,240,192,48,192,48,
  // 0x0144  ń
  12,24,48,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0145  Ņ
  14,24,48,16,0,252,48,12,48,12,60,12,60,12,60,12,60,12,51,12,51,12,51,12,51,12,48,204,48,204,48,204,48,204,48,60,48,60,48,60,48,60,48,12,48,12,12,0,12,0,240,0,240,0,
  // 0x0146  ņ
  14,20,40,16,0,252,51,240,51,240,60,12,60,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,48,12,12,0,12,0,240,0,240,0,
  // 0x0147  Ň
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,192,48,192,48,240,48,240,48,240,48,240,48,204,48,204,48,204,48,204,48,195,48,195,48,195,48,195,48,192,240,192,240,192,240,192,240,192,48,192,48,
  // 0x0148  ň
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0149  ŉ
  12,26,52,16,2,0,240,0,240,0,48,0,48,0,48,0,48,0,192,0,192,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x014a  Ŋ
  12,20,40,16,2,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,195,192,195,192,
  // 0x014b  ŋ
  12,20,40,16,2,252,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,0,48,0,48,3,192,3,192,
  // 0x014c  Ō
  12,26,52,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x014d  ō
  12,22,44,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x014e  Ŏ
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x014f  ŏ
  12,24,48,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0150  Ő
  14,28,56,16,2,0,60,60,60,60,192,192,192,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0151  ő
  14,24,48,16,2,0,60,60,60,60,192,192,192,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0152  Œ
  14,20,40,16,2,0,60,252,60,252,195,0,195,0,195,0,195,0,195,0,195,0,195,240,195,240,195,0,195,0,195,0,195,0,195,0,195,0,195,0,195,0,60,252,60,252,
  // 0x0153  œ
  14,16,32,16,2,0,60,240,60,240,195,12,195,12,195,12,195,12,195,252,195,252,195,0,195,0,195,0,195,0,195,12,195,12,60,240,60,240,
  // 0x0154  Ŕ
  12,28,56,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,195,0,195,0,192,192,192,192,192,192,192,192,192,48,192,48,192,48,192,48,
  // 0x0155  ŕ
  12,24,48,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x0156  Ŗ
  14,24,48,16,0,252,63,240,63,240,48,12,48,12,48,12,48,12,48,12,48,12,63,240,63,240,48,192,48,192,48,48,48,48,48,48,48,48,48,12,48,12,48,12,48,12,12,0,12,0,240,0,240,0,
  // 0x0157  ŗ
  14,20,40,16,0,252,51,240,51,240,60,12,60,12,48,12,48,12,48,0,48,0,48,0,48,0,48,0,48,0,48,0,48,0,48,0,48,0,12,0,12,0,240,0,240,0,
  // 0x0158  Ř
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,195,0,195,0,192,192,192,192,192,192,192,192,192,48,192,48,192,48,192,48,
  // 0x0159  ř
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x015a  Ś
  12,28,56,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x015b  ś
  12,24,48,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x015c  Ŝ
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x015d  ŝ
  12,24,48,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,63,192,63,192,
  // 0x015e  Ş
  12,24,48,16,2,252,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,3,0,3,0,60,0,60,0,
  // 0x015f  ş
  12,20,40,16,2,252,63,192,63,192,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,63,192,63,192,3,0,3,0,60,0,60,0,
  // 0x0160  Š
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0161  š
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,63,192,63,192,
  // 0x0162  Ţ
  14,24,48,16,2,252,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,60,0,60,0,
  // 0x0163  ţ
  10,24,48,16,2,252,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,192,3,192,3,0,3,0,60,0,60,0,
  // 0x0164  Ť
  14,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0165  ť
  10,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,192,3,192,
  // 0x0166  Ŧ
  14,20,40,16,2,0,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0167  ŧ
  10,20,40,16,2,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,3,192,3,192,
  // 0x0168  Ũ
  12,28,56,16,2,0,60,48,60,48,195,192,195,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0169  ũ
  12,24,48,16,2,0,60,48,60,48,195,192,195,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x016a  Ū
  12,26,52,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x016b  ū
  12,22,44,16,2,0,63,192,63,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x016c  Ŭ
  12,28,56,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x016d  ŭ
  12,26,52,16,2,0,192,48,192,48,192,48,192,48,63,192,63,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x016e  Ů
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,15,0,15,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x016f  ů
  12,24,48,16,2,0,15,0,15,0,48,192,48,192,15,0,15,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0170  Ű
  14,28,56,16,2,0,60,60,60,60,192,192,192,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0171  ű
  14,24,48,16,2,0,60,60,60,60,192,192,192,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0172  Ų
  12,24,48,16,2,252,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,12,0,12,0,3,192,3,192,
  // 0x0173  ų
  14,20,40,16,2,252,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,0,192,0,192,0,60,0,60,
  // 0x0174  Ŵ
  12,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,207,48,207,48,207,48,207,48,240,240,240,240,240,240,240,240,192,48,192,48,192,48,192,48,
  // 0x0175  ŵ
  14,24,48,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,192,12,192,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,60,240,60,240,
  // 0x0176  Ŷ
  14,28,56,16,2,0,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,12,192,12,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0177  ŷ
  12,28,56,16,2,252,15,0,15,0,48,192,48,192,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,48,240,48,240,15,48,15,48,0,48,0,48,0,48,0,48,63,192,63,192,
  // 0x0178  Ÿ
  14,28,56,16,2,0,48,192,48,192,48,192,48,192,0,0,0,0,0,0,0,0,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,12,192,12,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0179  Ź
  12,28,56,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x017a  ź
  12,24,48,16,2,0,3,192,3,192,60,0,60,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,255,240,255,240,
  // 0x017b  Ż
  12,28,56,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x017c  ż
  12,24,48,16,2,0,12,0,12,0,12,0,12,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,255,240,255,240,
  // 0x017d  Ž
  12,28,56,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x017e  ž
  12,24,48,16,2,0,48,192,48,192,15,0,15,0,0,0,0,0,0,0,0,0,255,240,255,240,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,255,240,255,240,
  // 0x017f  ſ
  10,22,44,16,2,0,3,192,3,192,12,0,12,0,12,0,12,0,12,0,12,0,252,0,252,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,
};

#endif // HAS_GRAPHICAL_TFT
