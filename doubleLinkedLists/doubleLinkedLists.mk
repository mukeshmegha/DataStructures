##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=doubleLinkedLists
ConfigurationName      :=Release
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/mmohan/Desktop/C++Development/DataStructures
ProjectPath            :=C:/Users/mmohan/Desktop/C++Development/DataStructures/doubleLinkedLists
IntermediateDirectory  :=../build-$(ConfigurationName)/doubleLinkedLists
OutDir                 :=../build-$(ConfigurationName)/doubleLinkedLists
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=mmohan
Date                   :=26/11/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite


Objects=

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/doubleLinkedLists/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\doubleLinkedLists" mkdir "..\build-$(ConfigurationName)\doubleLinkedLists"
	@echo "" > $(IntermediateDirectory)/.d
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\doubleLinkedLists" mkdir "..\build-$(ConfigurationName)\doubleLinkedLists"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/doubleLinkedLists/.d:
	@if not exist "..\build-$(ConfigurationName)\doubleLinkedLists" mkdir "..\build-$(ConfigurationName)\doubleLinkedLists"

PreBuild:


##
## Objects
##

-include ../build-$(ConfigurationName)/doubleLinkedLists//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


