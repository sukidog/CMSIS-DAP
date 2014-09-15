/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FLASH_ALGO_H
#define FLASH_ALGO_H

#ifdef __cplusplus
extern "C" {
#endif

int Init (unsigned long adr, unsigned long clk, unsigned long fnc);
int UnInit (unsigned long fnc);
int BlankCheck (unsigned long adr, unsigned long sz, unsigned char pat);
int EraseChip (void);
int EraseSector (unsigned long adr);
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf);

#ifdef __cplusplus
}
#endif

#endif