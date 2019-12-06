##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=binaryTrees
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/mmohan/Desktop/C++Development/DataStructures
ProjectPath            :=C:/Users/mmohan/Desktop/C++Development/DataStructures/binaryTrees
IntermediateDirectory  :=../build-$(ConfigurationName)/binaryTrees
OutDir                 :=../build-$(ConfigurationName)/binaryTrees
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=mmohan
Date                   :=05/12/2019
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
Objects0=../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/binaryTrees/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\binaryTrees" mkdir "..\build-$(ConfigurationName)\binaryTrees"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\binaryTrees" mkdir "..\build-$(ConfigurationName)\binaryTrees"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/binaryTrees/.d:
	@if not exist "..\build-$(ConfigurationName)\binaryTrees" mkdir "..\build-$(ConfigurationName)\binaryTrees"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(ObjectSuffix): binaryTrees.cpp ../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mmohan/Desktop/C++Development/DataStructures/binaryTrees/binaryTrees.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/binaryTrees.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(DependSuffix): binaryTrees.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(DependSuffix) -MM binaryTrees.cpp

../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(PreprocessSuffix): binaryTrees.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/binaryTrees/binaryTrees.cpp$(PreprocessSuffix) binaryTrees.cpp


-include ../build-$(ConfigurationName)/binaryTrees//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


