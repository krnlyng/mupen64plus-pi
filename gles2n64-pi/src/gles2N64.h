#ifndef GLN64_H
#define GLN64_H

#include "winlnxdefs.h"
#include "m64p_config.h"
#include "stdio.h"

#ifndef min
#define min(a,b) ((a) < (b) ? (a) : (b))
#endif

#define PLUGIN_NAME     "gles2n64"
#define PLUGIN_VERSION  0x000005
#define PLUGIN_API_VERSION 0x020200

extern ptr_ConfigGetSharedDataFilepath ConfigGetSharedDataFilepath;

extern HWND         hWnd;
extern char *screenDirectory;
extern char configdir[PATH_MAX];

extern void (*CheckInterrupts)( void );
extern void (*renderCallback)();


#endif
