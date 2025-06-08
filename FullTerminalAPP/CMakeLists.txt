cmake_minimum_required(VERSION 3.10)
project(TicTacToe_Embedded2027)

set(CMAKE_CXX_STANDARD 17)

# Find required packages
find_package(SQLite3 REQUIRED)
find_package(OpenSSL REQUIRED)

# Add executable
add_executable(main
    AICodeImproved.cpp
    GameLogicTest.cpp
    database.cpp
    PasswordHash.cpp
)

# Include current directory for headers
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link libraries
target_link_libraries(main PRIVATE SQLite::SQLite3 OpenSSL::SSL OpenSSL::Crypto)
