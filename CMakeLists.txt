cmake_minimum_required(VERSION 3.25)

project(AkshayaMart
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Drogon CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(unofficial-sodium CONFIG REQUIRED)

add_executable(AkshayaMart
    src/main.cpp4
)

target_link_libraries(AkshayaMart
    PRIVATE
    Drogon::Drogon
    nlohmann_json::nlohmann_json
    spdlog::spdlog
    unofficial-sodium::sodium
)

target_include_directories(AkshayaMart
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)