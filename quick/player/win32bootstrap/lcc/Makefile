# Wedit Makefile for project win32bootstrap
SRCDIR=c:\work\v3quick\quick\player\win32bootstrap
CFLAGS=-I"c:\lcc\include" -I"C:\lcc\include"  -O 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	win32bootstrap.res \
	win32bootstrap.obj

LIBS=
EXE=player3.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -s -subsystem windows -o $(SRCDIR)\lcc\player3.exe $(OBJS) $(LIBS)

# Build win32bootstrap.res
WIN32BOOTSTRAP_RC=\
	$(SRCDIR)\win32bootstrapres.h\

win32bootstrap.res:	$(WIN32BOOTSTRAP_RC) $(SRCDIR)\win32bootstrap.rc
	$(LCCROOT)\bin\lrc.exe -I$(SRCDIR) -I"c:\lcc\include" -I"C:\lcc\include"  $(SRCDIR)\win32bootstrap.rc

# Build win32bootstrap.c
WIN32BOOTSTRAP_C=\
	c:\lcc\include\windows.h\
	c:\lcc\include\stdlib.h\
	c:\lcc\include\stddef.h\
	c:\lcc\include\_syslist.h\
	c:\lcc\include\safelib.h\
	c:\lcc\include\string.h\
	c:\lcc\include\safelib.h\
	c:\lcc\include\win.h\
	c:\lcc\include\limits.h\
	c:\lcc\include\stdarg.h\
	c:\lcc\include\ctype.h\
	c:\lcc\include\basetsd.h\
	c:\lcc\include\windowsx.h\
	c:\lcc\include\string.h\
	c:\lcc\include\stdio.h\
	c:\lcc\include\safelib.h\
	c:\lcc\include\_syslist.h\
	$(SRCDIR)\win32bootstrapres.h\
	c:\lcc\include\windows.h\
	c:\lcc\include\lfc.h\
	c:\lcc\include\windows.h\
	c:\lcc\include\lfc_impl.h\
	c:\lcc\include\windows.h\

win32bootstrap.obj: $(WIN32BOOTSTRAP_C) $(SRCDIR)\win32bootstrap.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\win32bootstrap.c

link:
	$(LINKER)  -s -subsystem windows -o $(SRCDIR)\lcc\player3.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) player3.exe
