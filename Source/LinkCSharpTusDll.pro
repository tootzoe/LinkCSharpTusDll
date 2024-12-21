




#TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

#
#
PRJNAMETOOT = LinkCSharpTusDll
DEFINES += "LINKCSHARPTUSDLL_API="
DEFINES += "LINKCSHARPTUSDLL_API(...)="
#
DEFINES += "UCLASS()=LINKCSHARPTUSDLL_API"
DEFINES += "UCLASS(...)=LINKCSHARPTUSDLL_API"
#
# this is true during development with unreal-editor...

DEFINES += "WITH_EDITORONLY_DATA=1"

## this project only




INCLUDEPATH += ../Intermediate/Build/Win64/UnrealEditor/Inc/$$PRJNAMETOOT/UHT
#INCLUDEPATH += $$PRJNAMETOOT $$PRJNAMETOOT/Public $$PRJNAMETOOT/Private #don't use this,
# we should follow UE project struct to include files, start from prj.Build.cs folder
#
#  The Thirdparty libs
#
#
#
include(defs.pri)
include(inc.pri)
#
#

DISTFILES += \
    LinkCSharpTusDll.Target.cs \
    LinkCSharpTusDll/LinkCSharpTusDll.Build.cs \
    LinkCSharpTusDllEditor.Target.cs

HEADERS += \
    LinkCSharpTusDll/LinkCSharpTusDll.h \
    LinkCSharpTusDll/Public/TusUploadManager.h

SOURCES += \
    LinkCSharpTusDll/LinkCSharpTusDll.cpp \
    LinkCSharpTusDll/Private/TusUploadManager.cpp







