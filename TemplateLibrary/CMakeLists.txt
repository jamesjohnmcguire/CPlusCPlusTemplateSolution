# List only source files (cpp), not headers
set(LIB_SOURCES
    pch.cpp
)

# Add Windows-specific files
if(WIN32)
    list(APPEND LIB_SOURCES dllmain.cpp)
endif()

# Create the library FIRST
add_library(TemplateLibrary SHARED ${LIB_SOURCES})

# THEN set properties
target_include_directories(TemplateLibrary PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Windows-specific configurations
if(WIN32)
    target_compile_definitions(TemplateLibrary PRIVATE 
        TEMPLATELIBRARY_EXPORTS
    )
    set_target_properties(TemplateLibrary PROPERTIES
        WINDOWS_EXPORT_ALL_SYMBOLS TRUE
    )
    
    # Precompiled headers for MSVC
    if(MSVC)
        target_precompile_headers(TemplateLibrary PRIVATE pch.h)
    endif()
endif()

# C++ standard
target_compile_features(TemplateLibrary PRIVATE cxx_std_20)
