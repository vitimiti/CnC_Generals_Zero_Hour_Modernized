project(CNC_GENERALS_CODE_GAMEENGINE)

set(SRC
    ${PROJECT_SOURCE_DIR}/Source/Common/CRC.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/Audio/URLLaunch.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/AsciiString.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/CriticalSection.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/Snapshot.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/String.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/SubsystemInterface.cpp
    ${PROJECT_SOURCE_DIR}/Source/Common/System/UnicodeString.cpp)

set(PUBLIC_HDR
    ${PROJECT_SOURCE_DIR}/Include/Common/AsciiString.h
    ${PROJECT_SOURCE_DIR}/Include/Common/CRC.h
    ${PROJECT_SOURCE_DIR}/Include/Common/CriticalSection.h
    ${PROJECT_SOURCE_DIR}/Include/Common/Overridable.h
    ${PROJECT_SOURCE_DIR}/Include/Common/Snapshot.h
    ${PROJECT_SOURCE_DIR}/Include/Common/String.h
    ${PROJECT_SOURCE_DIR}/Include/Common/SubsystemInterface.h
    ${PROJECT_SOURCE_DIR}/Include/Common/UnicodeString.h
    ${PROJECT_SOURCE_DIR}/Include/Common/URLLaunch.h)

set(PRECOMPILED_HDR ${PROJECT_SOURCE_DIR}/Include/Precompiled/PreRTS.h)

set(INCLUDE_DIR
    ${PROJECT_SOURCE_DIR}/Include ${PROJECT_SOURCE_DIR}/../Libraries/Include
    ${PROJECT_SOURCE_DIR}/Include/Precompiled)

if(BUILD_SHARED_LIBS)
  add_library(${PROJECT_NAME} SHARED)
else()
  add_library(${PROJECT_NAME} STATIC)
endif()

target_sources(
  ${PROJECT_NAME}
  PUBLIC ${PUBLIC_HDR}
  PRIVATE ${SRC})

target_set_name(${PROJECT_NAME} cnc-generals-code-gameengine
                CnC.Generals.Code.GameEngine)

target_set_dll_compile_options(${PROJECT_NAME} PUBLIC)
target_set_common_compile_options(${PROJECT_NAME} PUBLIC)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})
target_precompile_headers(${PROJECT_NAME} PUBLIC ${PRECOMPILED_HDR})

if(NOT WIN32)
  target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads stdc++)
endif()
