# stop if cmake version below 3.5
cmake_minimum_required(VERSION 3.5)

# project name and supported languages
project(Jupiter C CXX)

enable_testing()

# project version
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)

# Packages
set(CPACK_PACKAGE_NAME "Jupiter")
set(CPACK_PACKAGE_VENDOR "Jupiter.org")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Jupiter")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")

set(CPACK_GENERATOR "RPM" "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Jupiter")

set(CPACK_RPM_COMPONENT_INSTALL ON)
set(CPACK_DEB_COMPONENT_INSTALL ON)

include(CPack)

cpack_add_component_group(Runtime)
cpack_add_component_group(Develop)

cpack_add_component(Libraries
    DISPLAY_NAME "Libraries"
    DESCRIPTION "Libraries"
    GROUP Runtime
    INSTALL_TYPES Full)

cpack_add_component(Headers
    DISPLAY_NAME "Headers"
    DESCRIPTION "Headers"
    GROUP Develop
    INSTALL_TYPES Full)

cpack_add_component(Applications
    DISPLAY_NAME "Applications"
    DESCRIPTION "Applications"
    GROUP Runtime
    INSTALL_TYPES Full)
