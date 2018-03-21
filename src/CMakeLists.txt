add_library (
    atom
    SHARED
    Atom.hpp
    Atom.cpp
    Property.hpp
    Property.cpp
)

add_executable (
    test_atom
    main.cpp
)

target_include_directories (atom PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries (test_atom LINK_PUBLIC atom)
