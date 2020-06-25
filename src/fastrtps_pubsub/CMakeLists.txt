
cmake_minimum_required(VERSION 2.8.12)

project("fastrtps_pubsub")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring StringIdl...")
add_library(StringIdl_lib StringIdl.cxx)
target_link_libraries(StringIdl_lib fastcdr fastrtps)

add_executable(StringIdl StringIdlPubSubTypes.cxx StringIdlPublisher.cxx StringIdlSubscriber.cxx StringIdlPubSubMain.cxx)
target_link_libraries(StringIdl fastcdr fastrtps
        StringIdl_lib )

install(TARGETS
        StringIdl
        DESTINATION lib/${PROJECT_NAME}
)

