set(This Example)

add_library(${This} "")

target_sources(
    ${This}
    PRIVATE
        Example.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Example.hpp
    )

target_include_directories(
    ${This}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )