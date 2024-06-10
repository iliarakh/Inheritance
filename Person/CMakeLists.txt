project(Student)

add_library(${PROJECT_NAME} 
	"include/BodyBuilder.hpp"
	"include/Person.hpp"
	"src/BodyBuilder.cpp"
	"src/Person.cpp"

)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)