#############################################################################
<<<<<<< HEAD
# Makefile for building: QT_Develop
# Generated by qmake (2.01a) (Qt 4.7.3) on: ?? 4? 8 23:11:59 2017
# Project:  QT_Develop.pro
=======
# Makefile for building: Bofeng
# Generated by qmake (2.01a) (Qt 4.8.1) on: Sun Apr 9 16:01:33 2017
# Project:  Bofeng.pro
>>>>>>> f2f3183641f4665ae8ca70274e31d88f902c4617
# Template: app
# Command: /home/vmuser/nfs_shared/qt-4.7.3-arm/bin/qmake -o Makefile QT_Develop.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-none-linux-gnueabi-gcc -lts
CXX           = arm-none-linux-gnueabi-g++ -lts
DEFINES       = -DQT_NO_DEBUG -DQT_SQL_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
<<<<<<< HEAD
INCPATH       = -I../../nfs_shared/qt-4.7.3-arm/mkspecs/qws/linux-arm-gnueabi-g++ -I. -I../../nfs_shared/qt-4.7.3-arm/include/QtCore -I../../nfs_shared/qt-4.7.3-arm/include/QtNetwork -I../../nfs_shared/qt-4.7.3-arm/include/QtGui -I../../nfs_shared/qt-4.7.3-arm/include/QtSql -I../../nfs_shared/qt-4.7.3-arm/include -I. -I. -I. -I../../nfs_shared/tslib/include
LINK          = arm-none-linux-gnueabi-g++ -lts
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/vmuser/nfs_shared/qt-4.7.3-arm/lib
LIBS          = $(SUBLIBS)  -L/home/vmuser/nfs_shared/tslib/lib -L/home/vmuser/nfs_shared/qt-4.7.3-arm/lib -lQtSql -L/home/vmuser/nfs_shared/qt-4.7.3-arm/lib -L/home/vmuser/nfs_shared/tslib/lib -lQtGui -lQtNetwork -lQtCore -lrt -lpthread 
AR            = arm-none-linux-gnueabi-ar cqs
=======
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I. -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
>>>>>>> f2f3183641f4665ae8ca70274e31d88f902c4617
RANLIB        = 
QMAKE         = /home/vmuser/nfs_shared/qt-4.7.3-arm/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-none-linux-gnueabi-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = application.c \
		CANopen.c \
		cmysplashscreen.cpp \
		CO_comm_helpers.c \
		CO_command.c \
		CO_driver.c \
		CO_Emergency.c \
		CO_HBconsumer.c \
		CO_Linux_tasks.c \
		CO_master.c \
		CO_NMT_Heartbeat.c \
		CO_OD.c \
		CO_OD_storage.c \
		CO_PDO.c \
		CO_SDO.c \
		CO_SDOmaster.c \
		CO_SYNC.c \
		CO_time.c \
		CO_trace.c \
		config.cpp \
		crc16-ccitt.c \
		dataset.cpp \
		globl_data.cpp \
		juxingkuang.cpp \
		keyboard.cpp \
		learn.cpp \
		log.cpp \
		main.cpp \
		mainwindow.cpp \
		management.cpp \
		notice.cpp \
		product.cpp \
		qmyedit.cpp \
		sqlite.cpp \
		subwidget.cpp \
		systemset.cpp \
		thread_canopen.cpp \
		varify.cpp \
		widget.cpp moc_cmysplashscreen.cpp \
		moc_dataset.cpp \
		moc_keyboard.cpp \
		moc_learn.cpp \
		moc_log.cpp \
		moc_mainwindow.cpp \
		moc_management.cpp \
		moc_notice.cpp \
		moc_product.cpp \
		moc_qmyedit.cpp \
		moc_subwidget.cpp \
		moc_systemset.cpp \
		moc_thread_canopen.cpp \
		moc_varify.cpp \
		moc_widget.cpp \
		qrc_Bofeng.cpp
OBJECTS       = application.o \
		CANopen.o \
		cmysplashscreen.o \
		CO_comm_helpers.o \
		CO_command.o \
		CO_driver.o \
		CO_Emergency.o \
		CO_HBconsumer.o \
		CO_Linux_tasks.o \
		CO_master.o \
		CO_NMT_Heartbeat.o \
		CO_OD.o \
		CO_OD_storage.o \
		CO_PDO.o \
		CO_SDO.o \
		CO_SDOmaster.o \
		CO_SYNC.o \
		CO_time.o \
		CO_trace.o \
		config.o \
		crc16-ccitt.o \
		dataset.o \
		globl_data.o \
		juxingkuang.o \
		keyboard.o \
		learn.o \
		log.o \
		main.o \
		mainwindow.o \
		management.o \
		notice.o \
		product.o \
		qmyedit.o \
		sqlite.o \
		subwidget.o \
		systemset.o \
		thread_canopen.o \
		varify.o \
		widget.o \
		moc_cmysplashscreen.o \
		moc_dataset.o \
		moc_keyboard.o \
		moc_learn.o \
		moc_log.o \
		moc_mainwindow.o \
		moc_management.o \
		moc_notice.o \
		moc_product.o \
		moc_qmyedit.o \
		moc_subwidget.o \
		moc_systemset.o \
		moc_thread_canopen.o \
		moc_varify.o \
		moc_widget.o \
		qrc_Bofeng.o
DIST          = ../../nfs_shared/qt-4.7.3-arm/mkspecs/common/g++.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/unix.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/linux.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/qws.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/qconfig.pri \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_functions.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_config.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/exclusive_builds.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_pre.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/release.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_post.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/warn_on.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/unix/thread.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/moc.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/resources.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/uic.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/yacc.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/lex.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/include_source_dir.prf \
		QT_Develop.pro
QMAKE_TARGET  = QT_Develop
DESTDIR       = 
TARGET        = QT_Develop

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

$(TARGET): ui_dataset.h ui_keyboard.h ui_learn.h ui_log.h ui_mainwindow.h ui_management.h ui_notice.h ui_systemset.h ui_varify.h ui_widget.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

<<<<<<< HEAD
Makefile: QT_Develop.pro  ../../nfs_shared/qt-4.7.3-arm/mkspecs/qws/linux-arm-gnueabi-g++/qmake.conf ../../nfs_shared/qt-4.7.3-arm/mkspecs/common/g++.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/unix.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/linux.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/common/qws.conf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/qconfig.pri \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_functions.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_config.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/exclusive_builds.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_pre.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/release.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_post.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/warn_on.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/unix/thread.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/moc.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/resources.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/uic.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/yacc.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/lex.prf \
		../../nfs_shared/qt-4.7.3-arm/mkspecs/features/include_source_dir.prf \
		/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtSql.prl \
		/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtCore.prl \
		/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtGui.prl \
		/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtNetwork.prl
	$(QMAKE) -o Makefile QT_Develop.pro
../../nfs_shared/qt-4.7.3-arm/mkspecs/common/g++.conf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/common/unix.conf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/common/linux.conf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/common/qws.conf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/qconfig.pri:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_functions.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt_config.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/exclusive_builds.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_pre.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/release.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/default_post.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/warn_on.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/qt.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/unix/thread.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/moc.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/resources.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/uic.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/yacc.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/lex.prf:
../../nfs_shared/qt-4.7.3-arm/mkspecs/features/include_source_dir.prf:
/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtSql.prl:
/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtCore.prl:
/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtGui.prl:
/home/vmuser/nfs_shared/qt-4.7.3-arm/lib/libQtNetwork.prl:
=======
Makefile: Bofeng.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtSql.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile Bofeng.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtSql.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
>>>>>>> f2f3183641f4665ae8ca70274e31d88f902c4617
qmake:  FORCE
	@$(QMAKE) -o Makefile QT_Develop.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/QT_Develop1.0.0 || $(MKDIR) .tmp/QT_Develop1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/QT_Develop1.0.0/ && $(COPY_FILE) --parents application.h CANopen.h cmysplashscreen.h CO_comm_helpers.h CO_command.h CO_driver.h CO_Emergency.h CO_HBconsumer.h CO_Linux_tasks.h CO_master.h CO_NMT_Heartbeat.h CO_OD.h CO_OD_storage.h CO_PDO.h CO_SDO.h CO_SDOmaster.h CO_SYNC.h CO_time.h CO_trace.h config.h crc16-ccitt.h dataset.h globl_data.h juxingkuang.h keyboard.h learn.h log.h mainwindow.h management.h notice.h product.h qmyedit.h sqlite.h subwidget.h systemset.h thread_canopen.h varify.h widget.h .tmp/QT_Develop1.0.0/ && $(COPY_FILE) --parents Bofeng.qrc .tmp/QT_Develop1.0.0/ && $(COPY_FILE) --parents application.c CANopen.c cmysplashscreen.cpp CO_comm_helpers.c CO_command.c CO_driver.c CO_Emergency.c CO_HBconsumer.c CO_Linux_tasks.c CO_master.c CO_NMT_Heartbeat.c CO_OD.c CO_OD_storage.c CO_PDO.c CO_SDO.c CO_SDOmaster.c CO_SYNC.c CO_time.c CO_trace.c config.cpp crc16-ccitt.c dataset.cpp globl_data.cpp juxingkuang.cpp keyboard.cpp learn.cpp log.cpp main.cpp mainwindow.cpp management.cpp notice.cpp product.cpp qmyedit.cpp sqlite.cpp subwidget.cpp systemset.cpp thread_canopen.cpp varify.cpp widget.cpp .tmp/QT_Develop1.0.0/ && $(COPY_FILE) --parents dataset.ui keyboard.ui learn.ui log.ui mainwindow.ui management.ui notice.ui systemset.ui varify.ui widget.ui .tmp/QT_Develop1.0.0/ && (cd `dirname .tmp/QT_Develop1.0.0` && $(TAR) QT_Develop1.0.0.tar QT_Develop1.0.0 && $(COMPRESS) QT_Develop1.0.0.tar) && $(MOVE) `dirname .tmp/QT_Develop1.0.0`/QT_Develop1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/QT_Develop1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_cmysplashscreen.cpp moc_dataset.cpp moc_keyboard.cpp moc_learn.cpp moc_log.cpp moc_mainwindow.cpp moc_management.cpp moc_notice.cpp moc_product.cpp moc_qmyedit.cpp moc_subwidget.cpp moc_systemset.cpp moc_thread_canopen.cpp moc_varify.cpp moc_widget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_cmysplashscreen.cpp moc_dataset.cpp moc_keyboard.cpp moc_learn.cpp moc_log.cpp moc_mainwindow.cpp moc_management.cpp moc_notice.cpp moc_product.cpp moc_qmyedit.cpp moc_subwidget.cpp moc_systemset.cpp moc_thread_canopen.cpp moc_varify.cpp moc_widget.cpp
moc_cmysplashscreen.cpp: cmysplashscreen.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) cmysplashscreen.h -o moc_cmysplashscreen.cpp

moc_dataset.cpp: dataset.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) dataset.h -o moc_dataset.cpp

moc_keyboard.cpp: ui_keyboard.h \
		keyboard.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) keyboard.h -o moc_keyboard.cpp

moc_learn.cpp: globl_data.h \
		varify.h \
		qmyedit.h \
		config.h \
		keyboard.h \
		ui_keyboard.h \
		mainwindow.h \
		log.h \
		management.h \
		learn.h \
		product.h \
		notice.h \
		systemset.h \
		dataset.h \
		widget.h \
		sqlite.h \
		juxingkuang.h \
		learn.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) learn.h -o moc_learn.cpp

moc_log.cpp: log.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) log.h -o moc_log.cpp

moc_mainwindow.cpp: globl_data.h \
		log.h \
		management.h \
		qmyedit.h \
		config.h \
		keyboard.h \
		ui_keyboard.h \
		learn.h \
		varify.h \
		mainwindow.h \
		systemset.h \
		dataset.h \
		widget.h \
		sqlite.h \
		juxingkuang.h \
		product.h \
		notice.h \
		mainwindow.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_management.cpp: qmyedit.h \
		config.h \
		keyboard.h \
		ui_keyboard.h \
		globl_data.h \
		learn.h \
		varify.h \
		mainwindow.h \
		log.h \
		management.h \
		product.h \
		notice.h \
		systemset.h \
		dataset.h \
		widget.h \
		sqlite.h \
		juxingkuang.h \
		management.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) management.h -o moc_management.cpp

moc_notice.cpp: notice.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) notice.h -o moc_notice.cpp

moc_product.cpp: product.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) product.h -o moc_product.cpp

moc_qmyedit.cpp: qmyedit.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) qmyedit.h -o moc_qmyedit.cpp

moc_subwidget.cpp: subwidget.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) subwidget.h -o moc_subwidget.cpp

moc_systemset.cpp: qmyedit.h \
		config.h \
		keyboard.h \
		ui_keyboard.h \
		globl_data.h \
		dataset.h \
		systemset.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) systemset.h -o moc_systemset.cpp

moc_thread_canopen.cpp: application.h \
		CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h \
		CO_OD_storage.h \
		CO_Linux_tasks.h \
		CO_time.h \
		CO_command.h \
		CO_comm_helpers.h \
		thread_canopen.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) thread_canopen.h -o moc_thread_canopen.cpp

moc_varify.cpp: qmyedit.h \
		config.h \
		keyboard.h \
		ui_keyboard.h \
		globl_data.h \
		mainwindow.h \
		log.h \
		management.h \
		learn.h \
		varify.h \
		product.h \
		notice.h \
		systemset.h \
		dataset.h \
		widget.h \
		sqlite.h \
		juxingkuang.h \
		varify.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) varify.h -o moc_varify.cpp

moc_widget.cpp: sqlite.h \
		juxingkuang.h \
		product.h \
		widget.h
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/moc $(DEFINES) $(INCPATH) widget.h -o moc_widget.cpp

compiler_rcc_make_all: qrc_Bofeng.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_Bofeng.cpp
qrc_Bofeng.cpp: Bofeng.qrc \
		image/circle_red.png \
		image/circle_green.png \
		image/slider.png \
		image/Keyboard.png \
		image/Bofeng.png
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/rcc -name Bofeng Bofeng.qrc -o qrc_Bofeng.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_dataset.h ui_keyboard.h ui_learn.h ui_log.h ui_mainwindow.h ui_management.h ui_notice.h ui_systemset.h ui_varify.h ui_widget.h
compiler_uic_clean:
	-$(DEL_FILE) ui_dataset.h ui_keyboard.h ui_learn.h ui_log.h ui_mainwindow.h ui_management.h ui_notice.h ui_systemset.h ui_varify.h ui_widget.h
ui_dataset.h: dataset.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic dataset.ui -o ui_dataset.h

ui_keyboard.h: keyboard.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic keyboard.ui -o ui_keyboard.h

ui_learn.h: learn.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic learn.ui -o ui_learn.h

ui_log.h: log.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic log.ui -o ui_log.h

ui_mainwindow.h: mainwindow.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_management.h: management.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic management.ui -o ui_management.h

ui_notice.h: notice.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic notice.ui -o ui_notice.h

ui_systemset.h: systemset.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic systemset.ui -o ui_systemset.h

ui_varify.h: varify.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic varify.ui -o ui_varify.h

ui_widget.h: widget.ui
	/home/vmuser/nfs_shared/qt-4.7.3-arm/bin/uic widget.ui -o ui_widget.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

<<<<<<< HEAD
application.o: application.c application.h \
=======
cmysplashscreen.o: cmysplashscreen.cpp cmysplashscreen.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cmysplashscreen.o cmysplashscreen.cpp

globl_data.o: globl_data.cpp globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o globl_data.o globl_data.cpp

log.o: log.cpp log.h \
		ui_log.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o log.o log.cpp

main.o: main.cpp cmysplashscreen.h \
		globl_data.h \
		thread_canopen.h \
		application.h \
>>>>>>> f2f3183641f4665ae8ca70274e31d88f902c4617
		CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
<<<<<<< HEAD
		CO_trace.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o application.o application.c
=======
		CO_trace.h \
		CO_OD_storage.h \
		CO_Linux_tasks.h \
		CO_time.h \
		CO_command.h \
		CO_comm_helpers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp ui_mainwindow.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

management.o: management.cpp ui_management.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o management.o management.cpp

systemset.o: systemset.cpp ui_systemset.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o systemset.o systemset.cpp

config.o: config.cpp config.h \
		keyboard.h \
		ui_keyboard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o config.o config.cpp

keyboard.o: keyboard.cpp keyboard.h \
		ui_keyboard.h \
		config.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o keyboard.o keyboard.cpp

qmyedit.o: qmyedit.cpp qmyedit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qmyedit.o qmyedit.cpp

widget.o: widget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o widget.o widget.cpp

subwidget.o: subwidget.cpp widget.h \
		sqlite.h \
		juxingkuang.h \
		product.h \
		ui_widget.h \
		subwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o subwidget.o subwidget.cpp

learn.o: learn.cpp ui_learn.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o learn.o learn.cpp

varify.o: varify.cpp ui_varify.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o varify.o varify.cpp

sqlite.o: sqlite.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sqlite.o sqlite.cpp

juxingkuang.o: juxingkuang.cpp juxingkuang.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o juxingkuang.o juxingkuang.cpp

product.o: product.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o product.o product.cpp

notice.o: notice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o notice.o notice.cpp

dataset.o: dataset.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dataset.o dataset.cpp
>>>>>>> f2f3183641f4665ae8ca70274e31d88f902c4617

CANopen.o: CANopen.c CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CANopen.o CANopen.c

cmysplashscreen.o: cmysplashscreen.cpp cmysplashscreen.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cmysplashscreen.o cmysplashscreen.cpp

CO_comm_helpers.o: CO_comm_helpers.c CO_comm_helpers.h \
		CO_driver.h \
		CO_SDO.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_comm_helpers.o CO_comm_helpers.c

CO_command.o: CO_command.c CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h \
		CO_command.h \
		CO_comm_helpers.h \
		CO_master.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_command.o CO_command.c

CO_driver.o: CO_driver.c CO_driver.h \
		CO_Emergency.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_driver.o CO_driver.c

CO_Emergency.o: CO_Emergency.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_Emergency.o CO_Emergency.c

CO_HBconsumer.o: CO_HBconsumer.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_HBconsumer.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_HBconsumer.o CO_HBconsumer.c

CO_Linux_tasks.o: CO_Linux_tasks.c CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h \
		CO_Linux_tasks.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_Linux_tasks.o CO_Linux_tasks.c

CO_master.o: CO_master.c CO_master.h \
		CO_driver.h \
		CO_SDO.h \
		CO_SDOmaster.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_master.o CO_master.c

CO_NMT_Heartbeat.o: CO_NMT_Heartbeat.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_NMT_Heartbeat.o CO_NMT_Heartbeat.c

CO_OD.o: CO_OD.c CO_OD.h \
		CO_driver.h \
		CO_SDO.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_OD.o CO_OD.c

CO_OD_storage.o: CO_OD_storage.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_OD_storage.h \
		crc16-ccitt.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_OD_storage.o CO_OD_storage.c

CO_PDO.o: CO_PDO.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_PDO.o CO_PDO.c

CO_SDO.o: CO_SDO.c CO_driver.h \
		CO_SDO.h \
		crc16-ccitt.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_SDO.o CO_SDO.c

CO_SDOmaster.o: CO_SDOmaster.c CO_driver.h \
		CO_SDO.h \
		CO_SDOmaster.h \
		crc16-ccitt.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_SDOmaster.o CO_SDOmaster.c

CO_SYNC.o: CO_SYNC.c CO_driver.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_SYNC.o CO_SYNC.c

CO_time.o: CO_time.c CO_time.h \
		CO_driver.h \
		CO_SDO.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_time.o CO_time.c

CO_trace.o: CO_trace.c CO_trace.h \
		CO_driver.h \
		CO_SDO.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o CO_trace.o CO_trace.c

config.o: config.cpp config.h \
		keyboard.h \
		ui_keyboard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o config.o config.cpp

crc16-ccitt.o: crc16-ccitt.c crc16-ccitt.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o crc16-ccitt.o crc16-ccitt.c

dataset.o: dataset.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dataset.o dataset.cpp

globl_data.o: globl_data.cpp globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o globl_data.o globl_data.cpp

juxingkuang.o: juxingkuang.cpp juxingkuang.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o juxingkuang.o juxingkuang.cpp

keyboard.o: keyboard.cpp keyboard.h \
		ui_keyboard.h \
		config.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o keyboard.o keyboard.cpp

learn.o: learn.cpp ui_learn.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o learn.o learn.cpp

log.o: log.cpp log.h \
		ui_log.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o log.o log.cpp

main.o: main.cpp cmysplashscreen.h \
		globl_data.h \
		thread_canopen.h \
		application.h \
		CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h \
		CO_OD_storage.h \
		CO_Linux_tasks.h \
		CO_time.h \
		CO_command.h \
		CO_comm_helpers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp ui_mainwindow.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

management.o: management.cpp ui_management.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o management.o management.cpp

notice.o: notice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o notice.o notice.cpp

product.o: product.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o product.o product.cpp

qmyedit.o: qmyedit.cpp qmyedit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qmyedit.o qmyedit.cpp

sqlite.o: sqlite.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sqlite.o sqlite.cpp

subwidget.o: subwidget.cpp widget.h \
		sqlite.h \
		juxingkuang.h \
		product.h \
		ui_widget.h \
		subwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o subwidget.o subwidget.cpp

systemset.o: systemset.cpp ui_systemset.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o systemset.o systemset.cpp

thread_canopen.o: thread_canopen.cpp thread_canopen.h \
		application.h \
		CANopen.h \
		CO_driver.h \
		CO_OD.h \
		CO_SDO.h \
		CO_Emergency.h \
		CO_NMT_Heartbeat.h \
		CO_SYNC.h \
		CO_PDO.h \
		CO_HBconsumer.h \
		CO_SDOmaster.h \
		CO_trace.h \
		CO_OD_storage.h \
		CO_Linux_tasks.h \
		CO_time.h \
		CO_command.h \
		CO_comm_helpers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o thread_canopen.o thread_canopen.cpp

varify.o: varify.cpp ui_varify.h \
		globl_data.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o varify.o varify.cpp

widget.o: widget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o widget.o widget.cpp

moc_cmysplashscreen.o: moc_cmysplashscreen.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_cmysplashscreen.o moc_cmysplashscreen.cpp

moc_dataset.o: moc_dataset.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dataset.o moc_dataset.cpp

moc_keyboard.o: moc_keyboard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_keyboard.o moc_keyboard.cpp

moc_learn.o: moc_learn.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_learn.o moc_learn.cpp

moc_log.o: moc_log.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_log.o moc_log.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_management.o: moc_management.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_management.o moc_management.cpp

moc_notice.o: moc_notice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_notice.o moc_notice.cpp

moc_product.o: moc_product.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_product.o moc_product.cpp

moc_qmyedit.o: moc_qmyedit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qmyedit.o moc_qmyedit.cpp

moc_subwidget.o: moc_subwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_subwidget.o moc_subwidget.cpp

moc_systemset.o: moc_systemset.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_systemset.o moc_systemset.cpp

moc_thread_canopen.o: moc_thread_canopen.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_thread_canopen.o moc_thread_canopen.cpp

moc_varify.o: moc_varify.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_varify.o moc_varify.cpp

moc_widget.o: moc_widget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_widget.o moc_widget.cpp

qrc_Bofeng.o: qrc_Bofeng.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_Bofeng.o qrc_Bofeng.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

