cmake_minimum_required(VERSION 3.17)
project(WebCoreDynamicRenderer C)
IF(NOT RE2C_FOUND)
    FIND_PROGRAM (RE2C_EXE NAMES re2c)

    IF (RE2C_EXE)
        SET(RE2C_FOUND TRUE CACHE BOOL "Whether re2c has been found")
    ENDIF ()

    IF (RE2C_FOUND)
        IF (NOT RE2C_FIND_QUIETLY)
            MESSAGE(STATUS "Looking for re2c... - found ${RE2C_EXECUTABLE}")
        ENDIF ()
    ELSE ()
        IF (RE2C_FIND_REQUIRED)
            MESSAGE(FATAL_ERROR "Looking for re2c... - NOT found")
        ENDIF ()
        MESSAGE(STATUS "Looking for re2c... - NOT found")
    ENDIF ()
ENDIF()

IF(RE2C_FOUND)
    SET(RE2C_EXECUTABLE ${RE2C_EXE})
ENDIF()
IF(NOT RE2C_EXECUTABLE)
    FIND_PACKAGE(RE2C REQUIRED)
ENDIF()
add_custom_command(
        OUTPUT main.re.h
        COMMAND "${RE2C_EXECUTABLE}" "${PROJECT_SOURCE_DIR}/main.re" -o "${PROJECT_SOURCE_DIR}/main.re.h"
        MAIN_DEPENDENCY main.re
        COMMENT "Preprocessing RE2C lexers"
        VERBATIM)

set(CMAKE_C_STANDARD 99)

add_executable(WebCoreDynamicRenderer main.c main.re.h)