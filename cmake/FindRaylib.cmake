include(FetchContent)
set(PACKAGE raylib)
set(RAYLIB_VERSION 5.5)

FetchContent_Declare(
    ${PACKAGE}
    URL             https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    SOURCE_DIR      "${PROJECT_SOURCE_DIR}/include/${PACKAGE}"
    FIND_PACKAGE_ARGS
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
)

string(TOUPPER ${PACKAGE} PACKAGE_UPPER)
set(FETCHCONTENT_UPDATES_DISCONNECTED_${PACKAGE_UPPER} ON)
FetchContent_MakeAvailable(${PACKAGE})
