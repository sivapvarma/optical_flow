
include(ExternalProject)

ExternalProject_Add(dvs128tools
    GIT_REPOSITORY https://github.com/sivapvarma/dvs128tools.git
    CMAKE_ARGS -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs
               -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs
    PREFIX "${CMAKE_CURRENT_BINARY_DIR}"
    # Disable install step
    INSTALL_COMMAND ""
)

# Specify include dir
ExternalProject_Get_Property(dvs128tools source_dir)
set(DVS128TOOLS_INCLUDE_DIR ${source_dir} PARENT_SCOPE) # force use to type Edvs/***.h

# Specify edvs tools library dir and lib
ExternalProject_Get_Property(dvs128tools binary_dir)
set(DVS128TOOLS_LIB_DIR ${binary_dir}/bin/ PARENT_SCOPE)
set(DVS128TOOLS_LIB dvs128 PARENT_SCOPE)
