project(CNC_GENERALS_CODE_GAMEENGINE)

set(SRC)

set(PUBLIC_HDR)

if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED)
else()
    add_library(${PROJECT_NAME} STATIC)
endif()

target_sources(${PROJECT_NAME} PUBLIC ${PUBLIC_HDR} PRIVATE ${SRC})

target_set_name(${PROJECT_NAME} cnc-generals-code-gameengine CnC.Generals.Code.GameEngine)
target_set_dll_compile_options(${PROJECT_NAME} PUBLIC)
target_set_common_compile_options(${PROJECT_NAME} PUBLIC)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/Include)