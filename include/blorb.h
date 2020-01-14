#ifndef _BLORB_H_
#define _BLORB_H_

typedef unsigned int UI32;

/* Define this if you're compiling for an Intel machine */
#define _INTEL

typedef struct {
  char iff_magic[4];  /* string from blorb might not be clean */
  UI32 length;
  char type[4];
} IFF_HEADER;

typedef struct {
  char id[4];         /* string from blorb might not be clean */
  UI32 length;
  UI32 num_res;
} RES_INDEX;

typedef struct {
  char usage[4];      /* string from blorb might not be clean */
  UI32 number;
  UI32 start;
} RES_ENTRY;

typedef struct {
  char type[4];
  UI32 length;
} RES_CHUNK;

#define MAX_RES (256)

#ifdef _INTEL
void endian_transform(UI32 *p);
#endif

#endif
