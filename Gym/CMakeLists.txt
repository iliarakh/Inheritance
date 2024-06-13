project(Gym)

add_library(${PROJECT_NAME} 
	"include/Crunch.hpp"
	"include/Movati.hpp"
	"src/Movati.cpp"
	"src/Crunch.cpp"

)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
