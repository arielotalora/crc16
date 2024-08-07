/*
 * MIT License
 * Copyright (c) 2024 Ariel Otalora Ramirez
 * Author: Ariel Otalora Ramirez <ariel.otalora.ramirez@gmail.com>
 * CRC-16/CCITT-FALSE C Library
 * Implementation of the CRC-16/CCITT-FALSE checksum calculation.
 * Repository: https://github.com/arielotalora/crc16
 */
 
#ifndef __CRC16_H__
#define __CRC16_H__

#include <stdint.h> 
#include <stddef.h>

//#define CRC16_METHOD_TAB
//#define CRC16_METHOD_BIT

uint16_t crc16(const uint8_t *data, size_t length);

#endif  // __CRC16_H__
