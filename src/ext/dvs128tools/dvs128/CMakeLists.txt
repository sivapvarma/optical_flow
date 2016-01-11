PROJECT(dvs128)

ADD_LIBRARY(${PROJECT_NAME} SHARED
	EventStream.cpp
    dvs128.h
    EventStream.hpp
    Event.hpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fpermissive")

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    caer
)
