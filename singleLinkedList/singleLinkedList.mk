##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=singleLinkedList
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/mmohan/Desktop/C++Development/DataStructures
ProjectPath            :=C:/Users/mmohan/Desktop/C++Development/DataStructures/singleLinkedList
IntermediateDirectory  :=../build-$(ConfigurationName)/singleLinkedList
OutDir                 :=../build-$(ConfigurationName)/singleLinkedList
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=mmohan
Date                   :=28/11/2019
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
Objects0=../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/singleLinkedList/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\singleLinkedList" mkdir "..\build-$(ConfigurationName)\singleLinkedList"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\singleLinkedList" mkdir "..\build-$(ConfigurationName)\singleLinkedList"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/singleLinkedList/.d:
	@if not exist "..\build-$(ConfigurationName)\singleLinkedList" mkdir "..\build-$(ConfigurationName)\singleLinkedList"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(ObjectSuffix): singleLinkedLists.cpp ../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mmohan/Desktop/C++Development/DataStructures/singleLinkedList/singleLinkedLists.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/singleLinkedLists.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(DependSuffix): singleLinkedLists.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(DependSuffix) -MM singleLinkedLists.cpp

../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(PreprocessSuffix): singleLinkedLists.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/singleLinkedList/singleLinkedLists.cpp$(PreprocessSuffix) singleLinkedLists.cpp


-include ../build-$(ConfigurationName)/singleLinkedList//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


