##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=stackImplementation
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/mmohan/Desktop/C++Development/DataStructures
ProjectPath            :=C:/Users/mmohan/Desktop/C++Development/DataStructures/stackImplementation
IntermediateDirectory  :=../build-$(ConfigurationName)/stackImplementation
OutDir                 :=../build-$(ConfigurationName)/stackImplementation
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
Objects0=../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/stackImplementation/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\stackImplementation" mkdir "..\build-$(ConfigurationName)\stackImplementation"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\stackImplementation" mkdir "..\build-$(ConfigurationName)\stackImplementation"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/stackImplementation/.d:
	@if not exist "..\build-$(ConfigurationName)\stackImplementation" mkdir "..\build-$(ConfigurationName)\stackImplementation"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(ObjectSuffix): stackImplementation.cpp ../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/mmohan/Desktop/C++Development/DataStructures/stackImplementation/stackImplementation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stackImplementation.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(DependSuffix): stackImplementation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(DependSuffix) -MM stackImplementation.cpp

../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(PreprocessSuffix): stackImplementation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/stackImplementation/stackImplementation.cpp$(PreprocessSuffix) stackImplementation.cpp


-include ../build-$(ConfigurationName)/stackImplementation//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


