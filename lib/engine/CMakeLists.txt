set (SOURCE_FILES engine.C engine.H)

add_library(engine SHARED ${SOURCE_FILES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
