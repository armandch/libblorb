#include "../include/blorb.h"

#ifdef _INTEL
void endian_transform(UI32 *p) {
  UI32 r = *p;
  r = (r>>24) | ((r>>8)&0x0000ff00) | ((r<<8)&0x00ff0000) | (r<<24);
  *p=r;
}
#endif
