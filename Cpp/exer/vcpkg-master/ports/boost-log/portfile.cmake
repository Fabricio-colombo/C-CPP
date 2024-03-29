# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/log
    REF boost-${VERSION}
    SHA512 cacd6cc1eb70da63638cf2769a7f4a8164293acecbfa2b782c9d1dbe83e20fe2c641f9e275358defd9b14598fe20224d6a7eb0d76fdaeb6b572aaa6465804655
    HEAD_REF master
)

file(READ "${SOURCE_PATH}/build/Jamfile.v2" _contents)
string(REPLACE "import config : requires" "import ../config/checks/config : requires" _contents "${_contents}")
string(REPLACE " <conditional>@select-arch-specific-sources" "#<conditional>@select-arch-specific-sources" _contents "${_contents}")
file(WRITE "${SOURCE_PATH}/build/Jamfile.v2" "${_contents}")
vcpkg_replace_string("${SOURCE_PATH}/build/log-arch-config.jam"
    "project.load [ path.join [ path.make $(here:D) ] ../../config/checks/architecture ]"
    "project.load [ path.join [ path.make $(here:D) ] ../config/checks/architecture ]"
)
file(COPY "${CURRENT_INSTALLED_DIR}/share/boost-config/checks" DESTINATION "${SOURCE_PATH}/config")
include(${CURRENT_HOST_INSTALLED_DIR}/share/boost-build/boost-modular-build.cmake)
boost_modular_build(SOURCE_PATH ${SOURCE_PATH})
include(${CURRENT_INSTALLED_DIR}/share/boost-vcpkg-helpers/boost-modular-headers.cmake)
boost_modular_headers(SOURCE_PATH ${SOURCE_PATH})
