# crc16: Librería en C para calcular CRC-16/CCITT-FALSE

Calcula el crc16 de un array por el método bit a bit o método tabla de consulta.

## Ejemplo main.c

```
#include <stdio.h>
#include "crc16.h"

uint8_t data[] = {0x61, 0x72, 0x69, 0x65, 0x6c, 0x6f, 0x74, 0x61, 0x6c, 0x6f, 0x72, 0x61};

int main(void) {

  uint16_t crc;
  crc = crc16(data, sizeof(data));
  printf("crc16: 0x%04X\n", crc);
  
  return 0;
}
```

## Método bit a bit:

```
>> make all METHOD=-DCRC16_METHOD_BIT
>> stat -f %zKB ./main
10312KB
>> ./main
crc16: 0x28F7
```

## Método tabla de consulta:

```
>> make all METHOD=-DCRC16_METHOD_TAB
>> stat -f %zKB ./main
10784KB
>> ./main
crc16: 0x28F7
```
