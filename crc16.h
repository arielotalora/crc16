#ifndef __CRC16_H__
#define __CRC16_H__

#include <stdlib.h> 
#include <unistd.h> 

//#define CRC16_METHOD_TAB
//#define CRC16_METHOD_BIT

uint16_t crc16(const uint8_t *data, size_t length);

#endif  // __CRC16_H__
