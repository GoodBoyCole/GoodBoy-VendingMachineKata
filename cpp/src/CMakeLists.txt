set(SRC_LIB_NAME src)
set(SOURCES sample.cpp VendingMachine.cpp VendingMachine.h VendingMachinePrinter.cpp VendingMachinePrinter.h)
add_library(${SRC_LIB_NAME} ${SOURCES})
target_sources(${SRC_LIB_NAME} PRIVATE ${SOURCES})
target_include_directories(${SRC_LIB_NAME} PUBLIC ${CMAK