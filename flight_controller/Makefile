# Makefile for STM32F103C8
#

################################################################################
#####
##### PROJECT
#####
##### The name of the project used as the build target name
#####
#####   -   Explicitly configure project name;
#####   -   Create project name from name of parent directory;


PROJECT         =  flight_controller
#PROJECT         = $(lastword $(subst /, ,$(shell cd ..;pwd)))

################################################################################
#####
##### Project target
#####

ARMCPU		= cortex-m3
STM32MCU	= STM32F103xB

################################################################################
#####
##### include master makefile
#####

## kludge to handle directory names with spaces
SPACECHAR 	 = 
SPACECHAR 	+=
BASEPATH 	 = $(subst $(SPACECHAR),\ ,$(shell cd ..;pwd))

include $(shell cd ..;pwd)/master.mk
