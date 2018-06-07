# CMakeList.txt : CMake project for uCraftVulkan, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(OpenGL REQUIRED)
find_package(Vulkan REQUIRED)

if (WIN32)
	include_directories("../Libs/GLFW/include" "../Libs/glm" "../Libs/GLEW/include" ${Vulkan_INCLUDE_DIR})
	link_directories("../Libs/GLEW/lib/Release/x64" "../Libs/GLFW/lib-vc2015")
endif (WIN32)

# Include sub-projects.
#add_subdirectory ("uCraftVulkan")

set(SOURCE_FILES	"uCraftVulkan.cpp"
					"Window/Window.cpp"
					"Renderer/Renderer.cpp")

add_executable("uCraftVulkan" ${SOURCE_FILES})
target_link_libraries("uCraftVulkan" glfw3 opengl32 glew32 glu32 ${Vulkan_LIBRARIES})

# TODO: Add tests and install targets if needed.
