set(This Example)

add_library(${This} "")

target_sources(
    ${This}
    PRIVATE
        Example.cpp
		Template.cpp
		SortedMerge.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Example.hpp
		${CMAKE_CURRENT_LIST_DIR}/Template.hpp
		${CMAKE_CURRENT_LIST_DIR}/SortedMerge.hpp
    )

target_include_directories(
    ${This}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )