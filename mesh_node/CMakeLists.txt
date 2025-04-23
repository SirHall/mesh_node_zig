file(GLOB_RECURSE MESH_NODE_SRCS
    "src/*.c"
    RELATIVE_PATH
)

add_library(mesh_node ${MESH_NODE_SRCS})
target_include_directories(mesh_node PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
target_include_directories(mesh_node PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../dep>")
set_property(TARGET mesh_node PROPERTY C_STANDARD 17)
