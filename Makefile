#############################################################################
# Makefile for building: sema
# Generated by qmake (2.01a) (Qt 4.5.2) on: Thu Apr 15 21:20:43 2010
# Project:  sema.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile sema.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		sema.cpp moc_sema.cpp \
		qrc_resources.cpp
OBJECTS       = main.o \
		sema.o \
		moc_sema.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		sema.pro
QMAKE_TARGET  = sema
DESTDIR       = 
TARGET        = sema

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_sema.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: sema.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile sema.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile sema.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/sema1.0.0 || $(MKDIR) .tmp/sema1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/sema1.0.0/ && $(COPY_FILE) --parents sema.h .tmp/sema1.0.0/ && $(COPY_FILE) --parents icons/resources.qrc .tmp/sema1.0.0/ && $(COPY_FILE) --parents main.cpp sema.cpp .tmp/sema1.0.0/ && $(COPY_FILE) --parents sema.ui .tmp/sema1.0.0/ && (cd `dirname .tmp/sema1.0.0` && $(TAR) sema1.0.0.tar sema1.0.0 && $(COMPRESS) sema1.0.0.tar) && $(MOVE) `dirname .tmp/sema1.0.0`/sema1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/sema1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_sema.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_sema.cpp
moc_sema.cpp: sema.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) sema.h -o moc_sema.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: icons/resources.qrc \
		icons/pause.png \
		icons/fullscreen.png \
		icons/pushpin.png \
		icons/vlc16x16.png \
		icons/icon32_hunspell.png \
		icons/previous.png \
		icons/stop.png \
		icons/empty.png \
		icons/delete.png \
		icons/help.png \
		icons/configure.png \
		icons/icon32_zoomin.png \
		icons/icon32_zoomout.png \
		icons/slow.png \
		icons/prev.png \
		icons/programicon.png \
		icons/volume_up.png \
		icons/print.png \
		icons/fileopen.png \
		icons/slider_bar.png \
		icons/warning.png \
		icons/slider_left.png \
		icons/play.png \
		icons/playsound.png \
		icons/snapshot.png \
		icons/speaker_mute.png \
		icons/icon32_wiki.png \
		icons/reload.png \
		icons/slider_right.png \
		icons/bookcase.png \
		icons/programicon_scan.png \
		icons/playlist_small.png \
		icons/icon32_dsl.png \
		icons/filesave.png \
		icons/delete_small.png \
		icons/speaker.png \
		icons/sd.png \
		icons/next.png \
		icons/loop.png \
		icons/interface.png \
		icons/white.png \
		icons/info.png \
		icons/programicon.ico \
		icons/book.png \
		icons/sort.png \
		icons/prefix.png \
		icons/addtab.png \
		icons/network.png \
		icons/repeat.png \
		icons/plus.png \
		icons/icon32_dictd.png \
		icons/internet.png \
		icons/volume_down.png \
		icons/eject.png \
		icons/icon32_stardict.png \
		icons/sout.png \
		icons/icon32_bgl.png \
		icons/slider_point.png \
		icons/shuffle.png \
		icons/icon32_zoombase.png \
		icons/icon_dsl_native.png \
		icons/refresh.png \
		icons/playlist.png \
		icons/hotkeys.png \
		icons/wizard.png \
		icons/icon32_xdxf.png \
		icons/arrow.png \
		icons/closetab.png \
		icons/minus.png \
		icons/white_cross_small.png
	/usr/bin/rcc -name resources icons/resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_sema.h
compiler_uic_clean:
	-$(DEL_FILE) ui_sema.h
ui_sema.h: sema.ui
	/usr/bin/uic-qt4 sema.ui -o ui_sema.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp sema.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

sema.o: sema.cpp sema.h \
		ui_sema.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sema.o sema.cpp

moc_sema.o: moc_sema.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_sema.o moc_sema.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

